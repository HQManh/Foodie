// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator.<>c__DisplayClass1_0$$<Translate>b__0
// address: 0x442499c
// body: available
// range: 0x442499c-0x4424c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4424c34 to 0x4af8044 FUN_04af8044 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4424c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4424c90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CompositeStructureTranslator_<>c__DisplayClass1_0__<Translate>b__0
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_09517f47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c40);
    FUN_03f5c2a4(&DAT_091ca8f8);
    FUN_03f5c2a4(&DAT_091ca300);
    FUN_03f5c2a4(&DAT_091785c8);
    FUN_03f5c2a4(&DAT_09178598);
    FUN_03f5c2a4(&DAT_09178588);
    FUN_03f5c2a4(&DAT_09180150);
    FUN_03f5c2a4(&DAT_091e6748);
    FUN_03f5c2a4(&DAT_091e6750);
    FUN_03f5c2a4(&DAT_091e6790);
    FUN_03f5c2a4(&DAT_0918ecc8);
    FUN_03f5c2a4(&DAT_0918ecb8);
    DAT_09517f47 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918ecc8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x10);
    *puVar4 = param_2;
    thunk_FUN_03f5d7b8(puVar4,param_2);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88);
      if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
      lVar6 = puVar3[1];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        }
        uVar7 = *puVar3;
        lVar6 = thunk_FUN_03f9944c(DAT_09178588);
        FUN_05324070(lVar6,uVar7,DAT_091e6748,0);
        plVar2 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 8);
        *plVar2 = lVar6;
        thunk_FUN_03f5d7b8(plVar2,lVar6);
      }
      uVar5 = FUN_04afac50(uVar5,lVar6,DAT_091ca8f8);
      uVar7 = thunk_FUN_03f9944c(DAT_091785c8);
      FUN_05322d94(uVar7,lVar1,DAT_091e6790,0);
      lVar1 = FUN_04ae5fd0(uVar5,uVar7,DAT_091c9c40);
      if (lVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x18);
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        lVar1 = puVar4[2];
        if (lVar1 == 0) {
          if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
          }
          uVar7 = *puVar4;
          lVar1 = thunk_FUN_03f9944c(DAT_09178598);
          FUN_05324070(lVar1,uVar7,DAT_091e6750,0);
          plVar2 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x10);
          *plVar2 = lVar1;
          thunk_FUN_03f5d7b8(plVar2,lVar1);
        }
        lVar1 = FUN_04af8044(uVar5,lVar1,DAT_091ca300);
        return lVar1;
      }
      lVar1 = FUN_03f5c394(DAT_09180150,1);
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined8 *)(lVar1 + 0x20) = *puVar4;
          thunk_FUN_03f5d7b8();
          return lVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

