// rea decompile_all
// name: CookingGraph.IngredientQueueTranslator$$ParseEffectToken
// address: 0x4428f38
// body: available
// range: 0x4428f38-0x4429393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44292fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4429300 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4429390 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] CookingGraph_IngredientQueueTranslator__ParseEffectToken(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09517f72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09183f18);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ac850);
    FUN_03f5c2a4(&DAT_091ac848);
    FUN_03f5c2a4(&DAT_0917c0e8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091bed18);
    DAT_09517f72 = 1;
  }
  lVar4 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04429300:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar4 + 0x20) = 0x23;
    if (param_1 != 0) {
      lVar4 = System_String__Split(param_1,lVar4,0,0);
      lVar5 = thunk_FUN_03f9944c(DAT_0917c0e8);
      FUN_057e0400(lVar5,DAT_091ac848);
      if (lVar4 != 0) {
        uVar9 = *(uint *)(lVar4 + 0x18);
        if (1 < (int)uVar9) {
          uVar16 = 1;
          do {
            if (uVar9 <= uVar16) goto LAB_04429300;
            lVar13 = *(long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
            lVar6 = FUN_03f5c394(DAT_0917fcc8,1);
            if (lVar6 == 0) goto LAB_044292fc;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_04429300;
            *(undefined2 *)(lVar6 + 0x20) = 0x3a;
            if ((lVar13 == 0) || (lVar6 = System_String__Split(lVar13,lVar6,0,0), lVar6 == 0))
            goto LAB_044292fc;
            if (*(long *)(lVar6 + 0x18) == 0) {
LAB_04429304:
              FUN_039b1d98(param_2);
              uVar3 = System_String__IndexOf(param_2,param_1,4,0);
              thunk_FUN_03fc39d4(&DAT_09187e80);
              FUN_039afb80();
              uVar3 = System_Math__Max(0,uVar3,0);
              thunk_FUN_03fc39d4(&DAT_09182d98);
              uVar14 = thunk_FUN_03f9944c();
              uVar8 = thunk_FUN_03fc39d4(&DAT_09201170);
              CookingGraph_CookingGraphFormatException___ctor(uVar14,uVar8,uVar3,param_2);
              uVar8 = thunk_FUN_03fc39d4(&DAT_091cfe30);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar14,uVar8);
            }
            if ((int)*(long *)(lVar6 + 0x18) == 0) goto LAB_04429300;
            if (*(long *)(lVar6 + 0x20) == 0) goto LAB_044292fc;
            if (*(int *)(*(long *)(lVar6 + 0x20) + 0x10) == 0) goto LAB_04429304;
            lVar13 = thunk_FUN_03f9944c(DAT_09183f18);
            CookingGraph_EffectData___ctor();
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_04429300;
            if (param_2 == 0) goto LAB_044292fc;
            uVar14 = *(undefined8 *)(lVar6 + 0x20);
            uVar3 = System_String__IndexOf(param_2,uVar14,4,0);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187e80);
            }
            uVar3 = System_Math__Max(0,uVar3,0);
            uVar3 = CookingGraph_IngredientQueueTranslator__ParseInteger(uVar14,param_2,uVar3);
            if (lVar13 == 0) goto LAB_044292fc;
            uVar10 = *(ulong *)(lVar6 + 0x18);
            *(undefined4 *)(lVar13 + 0x10) = uVar3;
            if (1 < (int)uVar10) {
              uVar10 = uVar10 & 0xffffffff;
              lVar12 = 5;
              do {
                if (uVar10 <= lVar12 - 4U) goto LAB_04429300;
                uVar14 = *(undefined8 *)(lVar6 + lVar12 * 8);
                lVar15 = *(long *)(lVar13 + 0x18);
                uVar3 = System_String__IndexOf(param_2,uVar14,4,0);
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09187e80);
                }
                uVar3 = System_Math__Max(0,uVar3,0);
                uVar3 = CookingGraph_IngredientQueueTranslator__ParseInteger(uVar14,param_2,uVar3);
                lVar2 = DAT_091adc88;
                if (lVar15 == 0) goto LAB_044292fc;
                lVar11 = *(long *)(lVar15 + 0x10);
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_044292fc;
                uVar9 = *(uint *)(lVar15 + 0x18);
                if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar9 + 1;
                  *(undefined4 *)(lVar11 + (long)(int)uVar9 * 4 + 0x20) = uVar3;
                }
                else {
                  FUN_057971a8(lVar15,uVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
                lVar15 = lVar12 + -3;
                lVar12 = lVar12 + 1;
              } while (lVar15 < (int)*(uint *)(lVar6 + 0x18));
            }
            lVar6 = DAT_091ac850;
            if (lVar5 == 0) goto LAB_044292fc;
            lVar12 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_044292fc;
            uVar9 = *(uint *)(lVar5 + 0x18);
            if (uVar9 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar9 + 1;
              plVar7 = (long *)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
              *plVar7 = lVar13;
              thunk_FUN_03f5d7b8(plVar7,lVar13);
            }
            else {
              FUN_057e0c68(lVar5,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = *(uint *)(lVar4 + 0x18);
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)uVar9);
        }
        if (uVar9 != 0) {
          local_70 = 0;
          uStack_68 = 0;
          FUN_066cee64(&local_70,*(undefined8 *)(lVar4 + 0x20),lVar5,DAT_091bed18);
          auVar1._8_8_ = uStack_68;
          auVar1._0_8_ = local_70;
          return auVar1;
        }
        goto LAB_04429300;
      }
    }
  }
LAB_044292fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

