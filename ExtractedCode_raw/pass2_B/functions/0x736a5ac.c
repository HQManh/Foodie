// rea decompile_all
// name: MaxSdkAndroid$$GetSdkConfiguration
// address: 0x736a5ac
// body: available
// range: 0x736a5ac-0x736a71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x736a714 to 0x736a748 MaxSdkBase.SdkConfiguration$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x736a718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkAndroid__GetSdkConfiguration(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_095208ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bfb08);
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_0921c540);
    DAT_095208ed = 1;
  }
  if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = DAT_091c0270;
  lVar5 = *(long *)(DAT_091c0270 + 0x38);
  lVar6 = **(long **)(DAT_09187f20 + 0xb8);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c0270);
    lVar5 = *(long *)(lVar1 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = FUN_04cc9c38(lVar6,DAT_0921c540,**(undefined8 **)(lVar1 + 0xb8),DAT_091bfb08);
  uVar3 = System_String__IsNullOrEmpty(uVar2,0);
  plVar4 = (long *)0x0;
  if (((uVar3 & 1) == 0) &&
     (plVar4 = (long *)AppLovinMax_ThirdParty_MiniJson_Json_Parser__Parse(uVar2),
     plVar4 != (long *)0x0)) {
    if (*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09176b80 + 0x130)) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8)
             != DAT_09176b80) {
      plVar4 = (long *)0x0;
    }
  }
  MaxSdkBase_SdkConfiguration__Create(plVar4);
  return;
}

