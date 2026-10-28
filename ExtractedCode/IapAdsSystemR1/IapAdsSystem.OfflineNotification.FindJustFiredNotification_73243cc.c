// rea decompile_all
// name: IapAdsSystem.OfflineNotification$$FindJustFiredNotification
// address: 0x73243cc
// body: available
// range: 0x73243cc-0x732462f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7324628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732462c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_OfflineNotification__FindJustFiredNotification(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  double extraout_d0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_095205c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09225e00);
    FUN_03f5c2a4(&DAT_09223f20);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095205c7 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  lVar3 = UnityEngine_PlayerPrefs__GetString(DAT_09223f20,DAT_091f5700,0);
  uVar4 = System_String__IsNullOrEmpty(lVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    if ((lVar3 == 0) || (uVar5 = System_String__Split(lVar3,0x3b,0,0), uVar4 = uVar5, uVar5 == 0)) {
LAB_07324628:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar4);
    }
    uVar1 = *(uint *)(uVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(uVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_07324628;
        uVar4 = System_String__IndexOf(lVar3,0x7c,0);
        iVar2 = (int)uVar4;
        if (0 < iVar2) {
          uVar6 = System_String__Substring(lVar3,0,uVar4 & 0xffffffff,0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183548);
          }
          uVar4 = System_DateTime__TryParseExact(uVar6,DAT_09225e00,uVar7,0,&local_68,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_70 = System_DateTime__get_Now(0);
            local_78 = System_DateTime__Subtract(&local_70,local_68,0);
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918bd60);
            }
            uVar4 = System_TimeSpan__get_TotalSeconds(&local_78,0);
            if ((0.0 <= extraout_d0) && (extraout_d0 <= 300.0)) {
              uVar6 = System_String__Substring(lVar3,iVar2 + 1,0);
              return uVar6;
            }
          }
        }
        uVar1 = *(uint *)(uVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
  }
  return 0;
}

