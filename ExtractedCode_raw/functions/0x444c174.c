// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ShowTake
// address: 0x444c174
// body: available
// range: 0x444c174-0x444c55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444c558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CookingGraph_CookingLevelSimulation__ShowTake(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09518003 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c1a8);
    FUN_03f5c2a4(&DAT_091c9af8);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09178470);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091e7e38);
    FUN_03f5c2a4(&DAT_091e7e40);
    FUN_03f5c2a4(&DAT_091e7e58);
    FUN_03f5c2a4(&DAT_091e7e60);
    FUN_03f5c2a4(&DAT_091e7e68);
    FUN_03f5c2a4(&DAT_091e7e70);
    FUN_03f5c2a4(&DAT_091e7e78);
    FUN_03f5c2a4(&DAT_091e7e80);
    FUN_03f5c2a4(&DAT_091e7e88);
    FUN_03f5c2a4(&DAT_0918f5a0);
    FUN_03f5c2a4(&DAT_091beba0);
    DAT_09518003 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918f5a0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass41_0___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    *(undefined4 *)(lVar4 + 0x14) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + 0x10);
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_2 + 0x70);
      if (iVar2 != 2) {
        if (iVar2 == 1) {
          uVar10 = *(ulong *)(param_2 + 0x48);
          *(ulong *)(lVar4 + 0x68) = uVar10;
          if ((*(long *)(param_1 + 0xb0) == 0) ||
             (lVar7 = FUN_06e4beb8(*(long *)(param_1 + 0xb0),uVar10,DAT_0919c1a8), lVar7 == 0))
          goto LAB_0444c558;
          CookingGraph_CookingLevelSimulation__ToolAddress
                    (&local_58,uVar10 & 0xffffffff,*(undefined4 *)(lVar7 + 0x18));
          *(undefined8 *)(lVar4 + 0x58) = uStack_50;
          *(undefined8 *)(lVar4 + 0x50) = local_58;
          *(undefined8 *)(lVar4 + 0x60) = local_48;
          thunk_FUN_03f5d7b8(lVar4 + 0x58,0);
          uVar5 = DAT_09178470;
          *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_2 + 0x68);
          uVar5 = thunk_FUN_03f9944c(uVar5);
          FUN_05311f60(uVar5,lVar4,DAT_091e7e58,0);
          uVar6 = thunk_FUN_03f9944c(DAT_09177ab8);
          puVar8 = &DAT_091e7e60;
        }
        else if (iVar2 == 0) {
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_2 + 0x30);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          uVar5 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(lVar4 + 0x38) = uVar6;
          *(undefined8 *)(lVar4 + 0x30) = uVar5;
          thunk_FUN_03f5d7b8(lVar4 + 0x38,0);
          uVar5 = DAT_09178470;
          uVar9 = 1;
          if (*(int *)(lVar4 + 0x30) != 2) {
            uVar9 = 2;
          }
          uVar1 = 0;
          if (*(int *)(lVar4 + 0x30) != 3) {
            uVar1 = uVar9;
          }
          *(undefined4 *)(lVar4 + 0x20) = uVar1;
          uVar5 = thunk_FUN_03f9944c(uVar5);
          FUN_05311f60(uVar5,lVar4,DAT_091e7e38,0);
          uVar6 = thunk_FUN_03f9944c(DAT_09177ab8);
          puVar8 = &DAT_091e7e40;
        }
        else {
          *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_2 + 0x58);
          thunk_FUN_03f5d7b8();
          uVar5 = thunk_FUN_03f9944c(DAT_09178470);
          FUN_05311f60(uVar5,lVar4,DAT_091e7e80,0);
          uVar6 = thunk_FUN_03f9944c(DAT_09177ab8);
          puVar8 = &DAT_091e7e88;
        }
LAB_0444c50c:
        FUN_053007d8(uVar6,lVar4,*puVar8,0);
        local_40 = 0;
        uStack_38 = 0;
        FUN_066cee64(&local_40,uVar5,uVar6,DAT_091beba0);
        auVar3._8_8_ = uStack_38;
        auVar3._0_8_ = local_40;
        return auVar3;
      }
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      lVar7 = *(long *)(param_1 + 0x178);
      *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(lVar4 + 0x78) = uVar5;
      if (lVar7 != 0) {
        uVar5 = CookingGraph_Execution_CookingExecution__get_Transfers(lVar7,0);
        uVar6 = thunk_FUN_03f9944c(DAT_09178730);
        FUN_05322d94(uVar6,lVar4,DAT_091e7e68,0);
        lVar7 = FUN_04ae3154(uVar5,uVar6,DAT_091c9af8);
        if (lVar7 != 0) {
          uVar6 = *(undefined8 *)(lVar7 + 0x48);
          uVar5 = *(undefined8 *)(lVar7 + 0x40);
          *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar7 + 0x50);
          *(undefined8 *)(lVar4 + 0x88) = uVar6;
          *(undefined8 *)(lVar4 + 0x80) = uVar5;
          thunk_FUN_03f5d7b8(lVar4 + 0x88,0);
          uVar5 = thunk_FUN_03f9944c(DAT_09178470);
          FUN_05311f60(uVar5,lVar4,DAT_091e7e70,0);
          uVar6 = thunk_FUN_03f9944c(DAT_09177ab8);
          puVar8 = &DAT_091e7e78;
          goto LAB_0444c50c;
        }
      }
    }
  }
LAB_0444c558:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

