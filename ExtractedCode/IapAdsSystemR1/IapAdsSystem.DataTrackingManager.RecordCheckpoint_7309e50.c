// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$RecordCheckpoint
// address: 0x7309e50
// body: available
// range: 0x7309e50-0x730a06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730a068 to 0x7309818 IapAdsSystem.DataTrackingManager$$FlushPendingCheckpoints (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x730a06c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_DataTrackingManager__RecordCheckpoint(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_095204aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4070);
    FUN_03f5c2a4(&DAT_091b4078);
    FUN_03f5c2a4(&DAT_091b4068);
    FUN_03f5c2a4(&DAT_0917d888);
    FUN_03f5c2a4(&DAT_0917e230);
    FUN_03f5c2a4(&DAT_091e8a70);
    FUN_03f5c2a4(&DAT_0918fd20);
    DAT_095204aa = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918fd20);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = param_2;
    thunk_FUN_03f5d7b8(plVar8,param_2);
    if ((*plVar8 == 0) ||
       (uVar3 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowTrackingData(0), (uVar3 & 1) == 0)) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
      IapAdsSystem_DataTrackingManager__SetUpUserProperties(param_1);
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) goto LAB_0730a06c;
    }
    plVar9 = (long *)(lVar6 + 0x58);
    if (*plVar9 == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917d888);
      FUN_057e0400(lVar6,DAT_091b4068);
      *plVar9 = lVar6;
      thunk_FUN_03f5d7b8(plVar9,lVar6);
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) goto LAB_0730a06c;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    uVar4 = thunk_FUN_03f9944c(DAT_0917e230);
    FUN_05d78cfc(uVar4,lVar2,DAT_091e8a70,0);
    if (lVar6 != 0) {
      uVar3 = FUN_057e1304(lVar6,uVar4,DAT_091b4078);
      lVar2 = DAT_091b4070;
      if ((uVar3 & 1) != 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x58), lVar6 != 0)) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar5 = *plVar8;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar5;
            thunk_FUN_03f5d7b8(plVar8);
          }
          else {
            FUN_057e0c68(lVar6,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            IapAdsSystem_UserAnalyticsState__Save(*(long *)(param_1 + 0x28),1,0);
            IapAdsSystem_DataTrackingManager__FlushPendingCheckpoints(param_1);
            return;
          }
        }
      }
    }
  }
LAB_0730a06c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

