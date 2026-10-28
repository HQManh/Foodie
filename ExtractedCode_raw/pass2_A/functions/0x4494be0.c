// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass70_0$$<AutoCompleteDish>b__5
// address: 0x4494be0
// body: available
// range: 0x4494be0-0x4494d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4494d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation_<>c__DisplayClass70_0__<AutoCompleteDish>b__5
          (long param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09518189 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cb0);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_09518189 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = FUN_05796eb0(*(long *)(param_1 + 0x28),param_3,DAT_091add20);
    if (*(long *)(param_1 + 0x30) != 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar11 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
        uVar5 = FUN_05796eb0(*(long *)(param_1 + 0x28),param_3,DAT_091add20);
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917b4b0) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04494cd0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b4b0,0);
LAB_04494cd0:
          lVar8 = (*(code *)*puVar6)(plVar11,uVar5,puVar6[1]);
          if (lVar8 != 0) {
            local_40 = *(undefined8 *)(param_2 + 4);
            uVar2 = *(undefined8 *)(param_2 + 6);
            uVar3 = *(undefined4 *)(lVar8 + 0x10);
            uStack_48 = *(undefined8 *)(param_2 + 2);
            local_50 = *(undefined8 *)param_2;
            uVar5 = 1;
            if (*param_2 != 2) {
              uVar5 = 2;
            }
            uVar1 = 0;
            if (*param_2 != 3) {
              uVar1 = uVar5;
            }
            uVar7 = thunk_FUN_03f9944c(DAT_09182cb0);
            CookingGraph_CookingAutoCompleteTake___ctor
                      (uVar7,uVar4,uVar3,uVar1,uVar2,&local_50,0,1,0);
            return uVar7;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

