package de.srlabs.msd;

import java.util.Calendar;
import java.util.Vector;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.graphics.Typeface;
import android.os.Bundle;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.ViewTreeObserver.OnGlobalLayoutListener;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.TextView;
import de.srlabs.msd.analysis.Risk;
import de.srlabs.msd.qdmon.StateChangedReason;
import de.srlabs.msd.util.DeviceCompatibilityChecker;
import de.srlabs.msd.views.DashboardThreatChart;
import de.srlabs.msd.views.adapter.ListViewProviderAdapter;

public class DashboardActivity extends BaseActivity 
{	
	// Attributes
	private int rectWidth;
	private DashboardThreatChart layout;
	private ViewTreeObserver vto;
	private TextView txtSmsMonthCount;
	private TextView txtSmsWeekCount;
	private TextView txtSmsDayCount;
	private TextView txtSmsHourCount;
	private TextView txtImsiMonthCount;
	private TextView txtImsiWeekCount;
	private TextView txtImsiDayCount;
	private TextView txtImsiHourCount;
	private DashboardThreatChart dtcSmsHour;
	private DashboardThreatChart dtcSmsDay;
	private DashboardThreatChart dtcSmsWeek;
	private DashboardThreatChart dtcSmsMonth;
	private DashboardThreatChart dtcImsiHour;
	private DashboardThreatChart dtcImsiDay;
	private DashboardThreatChart dtcImsiWeek;
	private DashboardThreatChart dtcImsiMonth;
	private TextView txtLastAnalysisTime;
	private TextView txtDashboardInterception3g;
	private TextView txtDashboardInterception2g;
	private TextView txtDashboardImpersonation3g;
	private TextView txtDashboardImpersonation2g;
	private ImageView imgSilentSms;
	private ImageView imgImsiCatcher;
	private ListView lstDashboardProviderList;
	private Vector<Risk> providerList;

	// Methods
	@Override
	protected void onCreate(Bundle savedInstanceState) 
	{
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_dashboard);
		
		// Compatibility check
		if (DeviceCompatibilityChecker.checkDeviceCompatibility() != null)
		{
			new AlertDialog.Builder(this)
		    .setTitle(R.string.alert_deviceCompatibility_title)
		    .setMessage(R.string.alert_deviceCompatibility_message)
		    .setPositiveButton(android.R.string.yes, new DialogInterface.OnClickListener() 
		    {
		        @Override
				public void onClick(DialogInterface dialog, int which) 
		        {   	
		        	//android.os.Process.killProcess(android.os.Process.myPid());
		        }
		     })
		    .setIcon(android.R.drawable.ic_dialog_alert)
		     .show();
		}	
		
		this.rectWidth = msdServiceHelperCreator.getRectWidth();
				
		txtSmsMonthCount = (TextView) findViewById(R.id.txtDashboardSilentSmsMonthCount);
		txtSmsWeekCount = (TextView) findViewById(R.id.txtDashboardSilentSmsWeekCount);
		txtSmsDayCount = (TextView) findViewById(R.id.txtDashboardSilentSmsDayCount);
		txtSmsHourCount = (TextView) findViewById(R.id.txtDashboardSilentSmsHourCount);
		txtImsiMonthCount = (TextView) findViewById(R.id.txtDashboardImsiCatcherMonthCount);
		txtImsiWeekCount = (TextView) findViewById(R.id.txtDashboardImsiCatcherWeekCount);
		txtImsiDayCount = (TextView) findViewById(R.id.txtDashboardImsiCatcherDayCount);
		txtImsiHourCount = (TextView) findViewById(R.id.txtDashboardImsiCatcherHourCount);
		txtLastAnalysisTime = (TextView) findViewById(R.id.txtDashboardLastAnalysisTime);
		imgSilentSms = (ImageView) findViewById(R.id.imgDashboardSilentSms);
		imgImsiCatcher = (ImageView) findViewById(R.id.imgDashboardImsiCatcher);
		
		dtcSmsHour = (DashboardThreatChart) findViewById(R.id.SilentSMSChartHour);
		dtcSmsDay = (DashboardThreatChart) findViewById(R.id.SilentSMSChartDay);
		dtcSmsWeek = (DashboardThreatChart) findViewById(R.id.SilentSMSChartWeek);
		dtcSmsMonth = (DashboardThreatChart) findViewById(R.id.SilentSMSChartMonth);
		dtcImsiHour = (DashboardThreatChart) findViewById(R.id.IMSICatcherChartHour);
		dtcImsiDay = (DashboardThreatChart) findViewById(R.id.IMSICatcherChartDay);
		dtcImsiWeek = (DashboardThreatChart) findViewById(R.id.IMSICatcherChartWeek);
		dtcImsiMonth = (DashboardThreatChart) findViewById(R.id.IMSICatcherChartMonth);
		
		lstDashboardProviderList = (ListView) findViewById(R.id.lstDashboardProviderList);
		
		txtDashboardInterception3g = (TextView) findViewById(R.id.txtDashboardInterception3g);
		txtDashboardInterception2g = (TextView) findViewById(R.id.txtDashboardInterception2g);
		txtDashboardImpersonation3g = (TextView) findViewById(R.id.txtDashboardImpersonation3g);
		txtDashboardImpersonation2g = (TextView) findViewById(R.id.txtDashboardImpersonation2g);
	}
	
	@Override
	protected void onStart() 
	{
		super.onStart();
		
		layout = (DashboardThreatChart)findViewById(R.id.SilentSMSChartMonth);
		vto = layout.getViewTreeObserver(); 
		vto.addOnGlobalLayoutListener(new OnGlobalLayoutListener() 
		{ 
		    @Override 
		    public void onGlobalLayout() 
		    { 
		        msdServiceHelperCreator.setRectWidth(layout.getMeasuredWidth() / 2);
		    } 
		});
	}
	
	@Override
	protected void onResume() 
	{				
		super.onResume();
		
		refreshView();
		
		// Get provider data
		this.providerList = msdServiceHelperCreator.getMsdServiceHelper().getData().getScores().getServerData();
		
		// Fill provider list
		fillProviderList();
		
		// Update RAT
		updateInterseptionImpersonation();
	}
	
	private void setRectWidth (int rectWidth)
	{		
//		LinearLayout silentSMSCharts = (LinearLayout) findViewById(R.id.SilentSMSCharts);
//		int countSMSCharts = silentSMSCharts.getChildCount();
//		
//		for (int i=0; i<=countSMSCharts; i++) 
//		{
//		    View v = silentSMSCharts.getChildAt(i);
//		    
//		    if (v instanceof LinearLayout) 
//		    {
//		    	if (((LinearLayout) v).getChildAt(1) instanceof DashboardThreatChart)
//		    	{
//		    		((DashboardThreatChart)((LinearLayout) v).getChildAt(1)).setRectWidth(_rectWidth);		 
//		    	}
//		    }
//		}
//		
//		LinearLayout imsiCatcherCharts = (LinearLayout) findViewById(R.id.IMSICatcherCharts);
//		int countImsiCharts = imsiCatcherCharts.getChildCount();
//		
//		for (int i=0; i<=countImsiCharts; i++) 
//		{
//		    View v = imsiCatcherCharts.getChildAt(i);
//		    
//		    if (v instanceof LinearLayout) 
//		    {
//		    	if (((LinearLayout) v).getChildAt(1) instanceof DashboardThreatChart)
//		    	{
//		    		((DashboardThreatChart)((LinearLayout) v).getChildAt(1)).setRectWidth(_rectWidth);	    		
//		    	}
//		    }
//		}
		
		msdServiceHelperCreator.setRectWidth (rectWidth);
	}
	
	public void openDetailView (View view)
	{		
		if (view.equals(findViewById(R.id.SilentSMSCharts)) || view.equals(findViewById(R.id.IMSICatcherCharts)))
		{
			Intent myIntent = new Intent(this, DetailChartActivity.class);
			myIntent.putExtra("ThreatType", view.getId());
			startActivity(myIntent);
		}
	}
	
	@Override
	public void stateChanged(StateChangedReason reason) 
	{
		if (reason.equals(StateChangedReason.CATCHER_DETECTED) || reason.equals(StateChangedReason.SMS_DETECTED))
		{
			refreshView();
		}
		else if (reason.equals(StateChangedReason.ANALYSIS_DONE))
		{
			updateLastAnalysis();
		}
		
		super.stateChanged(reason);
	}

	@Override
	protected void refreshView() 
	{
		// Redraw charts
		resetCharts();
		
		// Set texts
		resetThreatCounts();
	}
	
	private void resetThreatCounts ()
	{
		txtSmsMonthCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsSmsMonthSum()));
		txtSmsWeekCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsSmsWeekSum()));
		txtSmsDayCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsSmsDaySum()));
		txtSmsHourCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsSmsHourSum()));
		txtImsiMonthCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsImsiMonthSum()));
		txtImsiWeekCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsImsiWeekSum()));
		txtImsiDayCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsImsiDaySum()));
		txtImsiHourCount.setText(String.valueOf(msdServiceHelperCreator.getThreatsImsiHourSum()));
	}
	
	private void resetCharts ()
	{
		dtcSmsHour.invalidate();
		dtcSmsDay.invalidate();
		dtcSmsWeek.invalidate();
		dtcSmsMonth.invalidate();
		dtcImsiHour.invalidate();
		dtcImsiDay.invalidate();
		dtcImsiWeek.invalidate();
		dtcImsiMonth.invalidate();
	}
	
	private void fillProviderList ()
	{
		ListViewProviderAdapter providerAdapter = new ListViewProviderAdapter(this, providerList);
		lstDashboardProviderList.setAdapter(providerAdapter);	
	}
	
	private void updateLastAnalysis ()
	{
		// Set time of last measurement
		txtLastAnalysisTime.setText(String.valueOf(Calendar.getInstance().getTime()));
	}
	
	private void updateInterseptionImpersonation ()
	{		
		switch (msdServiceHelperCreator.getMsdServiceHelper().getData().getCurrentRAT()) 
		{		
			case RAT_2G:
				txtDashboardInterception3g.setTypeface(Typeface.DEFAULT);
				txtDashboardInterception2g.setTypeface(Typeface.DEFAULT_BOLD);
				txtDashboardImpersonation3g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation2g.setTypeface(Typeface.DEFAULT_BOLD);
				break;
			case RAT_3G:
				txtDashboardInterception3g.setTypeface(Typeface.DEFAULT_BOLD);
				txtDashboardInterception2g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation3g.setTypeface(Typeface.DEFAULT_BOLD);
				txtDashboardImpersonation2g.setTypeface(Typeface.DEFAULT);
				break;
			case RAT_LTE:
				txtDashboardInterception3g.setTypeface(Typeface.DEFAULT);
				txtDashboardInterception2g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation3g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation2g.setTypeface(Typeface.DEFAULT);
				break;	
			case RAT_UNKNOWN:
				txtDashboardInterception3g.setTypeface(Typeface.DEFAULT);
				txtDashboardInterception2g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation3g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation2g.setTypeface(Typeface.DEFAULT);
				break;
			default:
				txtDashboardInterception3g.setTypeface(Typeface.DEFAULT);
				txtDashboardInterception2g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation3g.setTypeface(Typeface.DEFAULT);
				txtDashboardImpersonation2g.setTypeface(Typeface.DEFAULT);
				break;
		}
	}
	
	public Vector<Risk> getProviderData ()
	{
		return providerList;
	}
}
