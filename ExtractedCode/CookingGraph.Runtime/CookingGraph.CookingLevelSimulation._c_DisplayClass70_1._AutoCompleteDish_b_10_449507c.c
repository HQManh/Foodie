// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass70_1$$<AutoCompleteDish>b__10
// address: 0x449507c
// body: available
// range: 0x449507c-0x44951eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44951e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44951e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation_<>c__DisplayClass70_1__<AutoCompleteDish>b__10
               (ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_34;
  
  uVar5 = param_1;
  if ((DAT_0951818c & 1) == 0) {
    uVar5 = FUN_03f5c2a4(&DAT_0919e470);
    DAT_0951818c = 1;
  }
  local_34 = 0;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x30) != '\0')) {
    return false;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if ((((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) &&
      (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x78), lVar8 != 0)) &&
     (lVar8 = *(long *)(lVar8 + 0x70), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_2 + 0x18)) {
LAB_044951e8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar5 = 0;
    if (*(long *)(lVar7 + 0x20) != 0) {
      iVar2 = *(int *)(param_2 + 0x28);
      iVar3 = *(int *)(param_2 + 0x2c);
      iVar4 = *(int *)(lVar8 + (long)(int)*(uint *)(param_2 + 0x18) * 4 + 0x20);
      uVar6 = FUN_06f4de70(*(long *)(lVar7 + 0x20),*(undefined8 *)(param_2 + 0x10),&local_34,
                           DAT_0919e470);
      uVar5 = 0;
      iVar1 = local_34;
      if ((uVar6 & 1) == 0) {
        iVar1 = 0;
      }
      if (iVar4 * iVar2 - iVar3 <= iVar1) {
        return false;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        uVar5 = CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_50,param_2,0);
        if (lVar7 != 0) {
          uStack_68 = uStack_48;
          local_70 = local_50;
          local_60 = local_40;
          uVar5 = CookingGraph_CookingLevelSimulation__Outgoing(lVar7,&local_70,0);
          if ((uVar5 & 1) != 0) {
            return false;
          }
          if (((*(long *)(param_1 + 0x18) != 0) &&
              (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 != 0)) &&
             ((lVar7 = *(long *)(lVar7 + 0x78), lVar7 != 0 &&
              (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)))) {
            if (*(uint *)(param_2 + 0x18) < *(uint *)(lVar7 + 0x18)) {
              return *(int *)(lVar7 + (long)(int)*(uint *)(param_2 + 0x18) * 4 + 0x20) ==
                     *(int *)(param_1 + 0x10);
            }
            goto LAB_044951e8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar5);
}

