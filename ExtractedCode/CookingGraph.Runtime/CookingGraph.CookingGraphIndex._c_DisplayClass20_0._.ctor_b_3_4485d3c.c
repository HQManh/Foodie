// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass20_0$$<.ctor>b__3
// address: 0x4485d3c
// body: available
// range: 0x4485d3c-0x448604f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4486048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448604c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingGraphIndex_<>c__DisplayClass20_0__<_ctor>b__3(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  
  if ((DAT_095180d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca980);
    FUN_03f5c2a4(&DAT_091ca778);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cace8);
    FUN_03f5c2a4(&DAT_09179148);
    FUN_03f5c2a4(&DAT_091797e8);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b0ff0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918f278);
    FUN_03f5c2a4(&DAT_091e71a0);
    FUN_03f5c2a4(&DAT_091e71b0);
    FUN_03f5c2a4(&DAT_0918f178);
    DAT_095180d5 = 1;
  }
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x38), lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x18) == 0) {
      lVar5 = FUN_03f5c394(DAT_091801b8,1);
      if (lVar5 == 0) goto LAB_04486048;
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined4 *)(lVar5 + 0x20) = 1;
    }
    else {
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      lVar6 = puVar4[4];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        }
        uVar7 = *puVar4;
        lVar6 = thunk_FUN_03f9944c(DAT_09179148);
        FUN_053239c8(lVar6,uVar7,DAT_091e71a0,0);
        plVar3 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x20);
        *plVar3 = lVar6;
        thunk_FUN_03f5d7b8(plVar3,lVar6);
      }
      uVar7 = FUN_04af6d6c(lVar5,lVar6,DAT_091ca778);
      lVar5 = FUN_04b0462c(uVar7,DAT_091cae30);
    }
    lVar6 = thunk_FUN_03f9944c(DAT_0918f278);
    System_Object___ctor(lVar6,0);
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    lVar8 = puVar4[5];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      }
      uVar7 = *puVar4;
      lVar8 = thunk_FUN_03f9944c(DAT_091797e8);
      FUN_0532e7bc(lVar8,uVar7,DAT_091e71b0,0);
      plVar3 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x28);
      *plVar3 = lVar8;
      thunk_FUN_03f5d7b8(plVar3,lVar8);
    }
    uVar7 = FUN_04afa7f0(lVar5,lVar8,DAT_091ca980);
    uVar7 = FUN_04b04054(uVar7,DAT_091cace8);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),uVar7);
      uVar1 = System_Linq_Enumerable__Max(lVar5,0);
      lVar5 = DAT_09187e80;
      uVar2 = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(lVar6 + 0x18) = uVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Math__Max(0,uVar2,0);
      lVar5 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(lVar6 + 0x1c) = uVar2;
      if (lVar5 != 0) {
        fVar9 = (float)CookingGraph_CookingRuntimeSettings__ToolProcessTimeFor(lVar5,param_2);
        *(double *)(lVar6 + 0x20) = (double)fVar9;
        return lVar6;
      }
    }
  }
LAB_04486048:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

