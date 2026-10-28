// rea decompile_all
// name: CookingGraph.GridLayoutTranslator$$Parse
// address: 0x442a31c
// body: available
// range: 0x442a31c-0x442a5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442a504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442a508 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442a578 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442a5d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_GridLayoutTranslator__Parse(long param_1)

{
  uint uVar1;
  long lVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  
  if ((DAT_09517f67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09184ec8);
    FUN_03f5c2a4(&DAT_09184ee0);
    FUN_03f5c2a4(&DAT_091acf58);
    DAT_09517f67 = 1;
  }
  if (param_1 == 0) {
    uVar12 = **(undefined8 **)(DAT_09535468 + 0xb8);
    thunk_FUN_03fc39d4(&DAT_09182d98);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_092039c0);
    CookingGraph_CookingGraphFormatException___ctor(uVar8,uVar9,0,uVar12);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091ce328);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09184ee0);
  CookingGraph_GridLayoutData___ctor();
  lVar5 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0442a508:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar5 + 0x20) = 0x2c;
    lVar5 = System_String__Split(param_1,lVar5,0,0);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar15 = 0;
        iVar13 = 0;
        do {
          if (uVar1 <= uVar15) goto LAB_0442a508;
          lVar14 = *(long *)(lVar5 + (long)(int)uVar15 * 8 + 0x20);
          lVar6 = thunk_FUN_03f9944c(DAT_09184ec8);
          CookingGraph_GridCellData___ctor();
          if (lVar14 == 0) goto LAB_0442a504;
          if (0 < *(int *)(lVar14 + 0x10)) {
            sVar3 = System_String__get_Chars(lVar14,0,0);
            if (sVar3 != 0x23) {
              uVar8 = thunk_FUN_03fc39d4(&DAT_092057c0);
              uVar9 = thunk_FUN_03fc39d4(&DAT_091f6e58);
              uVar8 = System_String__Concat(uVar8,lVar14,uVar9,0);
              thunk_FUN_03fc39d4(&DAT_09182d98);
              uVar9 = thunk_FUN_03f9944c();
              CookingGraph_CookingGraphFormatException___ctor(uVar9,uVar8,iVar13,param_1);
              uVar8 = thunk_FUN_03fc39d4(&DAT_091ce328);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar9,uVar8);
            }
            CookingGraph_IngredientQueueTranslator__ParseEffectToken(lVar14,param_1);
            if (lVar6 == 0) goto LAB_0442a504;
            *(undefined8 *)(lVar6 + 0x10) = extraout_x1;
            thunk_FUN_03f5d7b8();
          }
          lVar2 = DAT_091acf58;
          if ((lVar4 == 0) || (lVar7 = *(long *)(lVar4 + 0x10), lVar7 == 0)) goto LAB_0442a504;
          lVar10 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0442a504;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar6;
            thunk_FUN_03f5d7b8(plVar11,lVar6);
          }
          else {
            FUN_057e0c68(lVar7,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar15 = uVar15 + 1;
          iVar13 = iVar13 + *(int *)(lVar14 + 0x10) + 1;
        } while ((int)uVar15 < (int)uVar1);
      }
      return lVar4;
    }
  }
LAB_0442a504:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

