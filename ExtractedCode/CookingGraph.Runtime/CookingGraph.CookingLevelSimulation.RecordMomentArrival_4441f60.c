// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$RecordMomentArrival
// address: 0x4441f60
// body: available
// range: 0x4441f60-0x4442133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4442130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__RecordMomentArrival
               (long param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_38;
  undefined8 local_28;
  
  if ((DAT_09517ff2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e508);
    FUN_03f5c2a4(&DAT_0919f1d8);
    FUN_03f5c2a4(&DAT_0919e518);
    FUN_03f5c2a4(&DAT_0919f1f0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_09517ff2 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_06f54e88(*(long *)(param_1 + 0x10),*param_2,&local_28,DAT_0919e518);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_06f54860(*(long *)(param_1 + 0x10),*param_2,DAT_0919e508);
      if (*param_3 != 2) {
        return;
      }
      uVar4 = CookingGraph_CookingLevelSimulation__MomentInFlight(param_1,local_28);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar4 = FUN_06fd9fbc(*(long *)(param_1 + 0x18),local_28,&local_38,DAT_0919f1d8);
        uVar3 = local_28;
        if ((uVar4 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          lVar5 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar5,DAT_091adc70);
          local_38 = lVar5;
          if (lVar6 == 0) goto LAB_04442130;
          FUN_06fd8440(lVar6,uVar3,lVar5,DAT_0919f1f0);
        }
        lVar5 = DAT_091adc88;
        if (local_38 != 0) {
          lVar6 = *(long *)(local_38 + 0x10);
          iVar1 = param_3[4];
          *(int *)(local_38 + 0x1c) = *(int *)(local_38 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar2 = *(uint *)(local_38 + 0x18);
            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(local_38 + 0x18) = uVar2 + 1;
              *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
              return;
            }
            FUN_057971a8(local_38,iVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_04442130:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

