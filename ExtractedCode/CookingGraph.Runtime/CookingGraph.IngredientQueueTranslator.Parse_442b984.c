// rea decompile_all
// name: CookingGraph.IngredientQueueTranslator$$Parse
// address: 0x442b984
// body: available
// range: 0x442b984-0x442c08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442bf2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442bf30 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442bfc4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c024 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c08c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_IngredientQueueTranslator__Parse(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  if ((DAT_09517f6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09186c10);
    FUN_03f5c2a4(&DAT_09186c18);
    FUN_03f5c2a4(&DAT_091af4a0);
    FUN_03f5c2a4(&DAT_091ada68);
    FUN_03f5c2a4(&DAT_091af4c8);
    FUN_03f5c2a4(&DAT_091ac848);
    FUN_03f5c2a4(&DAT_0917c0e8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189918);
    DAT_09517f6e = 1;
  }
  lVar5 = CookingGraph_LevelStringCompression__Decode(param_1);
  if (lVar5 == 0) {
    uVar13 = **(undefined8 **)(DAT_09535468 + 0xb8);
    thunk_FUN_03fc39d4(&DAT_09182d98);
    uVar11 = thunk_FUN_03f9944c();
    uVar21 = thunk_FUN_03fc39d4(&DAT_0920b2c0);
    CookingGraph_CookingGraphFormatException___ctor(uVar11,uVar21,0,uVar13);
    uVar21 = thunk_FUN_03fc39d4(&DAT_091cfe20);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar21);
  }
  lVar6 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0442bf30:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar6 + 0x20) = 0x24;
    lVar6 = System_String__Split(lVar5,lVar6,0,0);
    if (lVar6 != 0) {
      if (3 < *(int *)(lVar6 + 0x18)) {
        FUN_039b1d98(lVar5);
        uVar3 = System_String__IndexOf(lVar5,0x24,0);
        thunk_FUN_03fc39d4(&DAT_09182d98);
        uVar11 = thunk_FUN_03f9944c();
        uVar21 = thunk_FUN_03fc39d4(&DAT_0920b2b8);
        CookingGraph_CookingGraphFormatException___ctor(uVar11,uVar21,uVar3,lVar5);
        uVar21 = thunk_FUN_03fc39d4(&DAT_091cfe20);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar11,uVar21);
      }
      lVar7 = thunk_FUN_03f9944c(DAT_09186c18);
      CookingGraph_IngredientQueueData___ctor();
      if (*(long *)(lVar6 + 0x18) == 0) {
        plVar12 = *(long **)(DAT_09535468 + 0xb8);
      }
      else {
        if ((int)*(long *)(lVar6 + 0x18) == 0) goto LAB_0442bf30;
        plVar12 = (long *)(lVar6 + 0x20);
      }
      lVar18 = *plVar12;
      uVar8 = System_String__IsNullOrWhiteSpace(lVar18,0);
      if ((uVar8 & 1) == 0) {
        lVar9 = FUN_03f5c394(DAT_0917fcc8,1);
        if (lVar9 == 0) goto LAB_0442bf2c;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0442bf30;
        *(undefined2 *)(lVar9 + 0x20) = 0x25;
        if ((lVar18 == 0) || (lVar18 = System_String__Split(lVar18,lVar9,0,0), lVar18 == 0))
        goto LAB_0442bf2c;
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (0 < (int)uVar1) {
          uVar17 = 0;
          do {
            if (uVar1 <= uVar17) goto LAB_0442bf30;
            lVar19 = *(long *)(lVar18 + (long)(int)uVar17 * 8 + 0x20);
            lVar9 = thunk_FUN_03f9944c(DAT_09186c10);
            CookingGraph_IngredientQueueColumnData___ctor();
            if (lVar19 == 0) goto LAB_0442bf2c;
            if (*(int *)(lVar19 + 0x10) == 0) {
              if (lVar7 == 0) goto LAB_0442bf2c;
              lVar19 = *(long *)(lVar7 + 0x10);
              lVar10 = DAT_091ada68;
            }
            else {
              lVar10 = FUN_03f5c394(DAT_0917fcc8,1);
              if (lVar10 == 0) goto LAB_0442bf2c;
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0442bf30;
              *(undefined2 *)(lVar10 + 0x20) = 0x2c;
              lVar19 = System_String__Split(lVar19,lVar10,0,0);
              if (lVar19 == 0) goto LAB_0442bf2c;
              if (0 < (int)*(ulong *)(lVar19 + 0x18)) {
                uVar8 = 0;
                uVar15 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
                do {
                  if (uVar15 <= uVar8) goto LAB_0442bf30;
                  uVar21 = *(undefined8 *)(lVar19 + 0x20 + uVar8 * 8);
                  auVar22 = CookingGraph_IngredientQueueTranslator__ParseEffectToken(uVar21,lVar5);
                  uVar11 = auVar22._8_8_;
                  uVar3 = System_String__IndexOf(lVar5,uVar21,4,0);
                  lVar10 = FUN_03f5c394(DAT_0917fcc8,1);
                  if (lVar10 == 0) goto LAB_0442bf2c;
                  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0442bf30;
                  *(undefined2 *)(lVar10 + 0x20) = 0x3a;
                  if ((auVar22._0_8_ == 0) ||
                     (lVar10 = System_String__Split(auVar22._0_8_,lVar10,0,0), lVar10 == 0))
                  goto LAB_0442bf2c;
                  if (2 < *(int *)(lVar10 + 0x18)) {
                    uVar11 = thunk_FUN_03fc39d4(&DAT_0920b2a0);
                    uVar13 = thunk_FUN_03fc39d4(&DAT_091f6db0);
                    uVar11 = System_String__Concat(uVar11,uVar21,uVar13,0);
                    thunk_FUN_03fc39d4(&DAT_09187e80);
                    FUN_039afb80();
                    uVar3 = System_Math__Max(0,uVar3,0);
                    thunk_FUN_03fc39d4(&DAT_09182d98);
                    uVar21 = thunk_FUN_03f9944c();
                    CookingGraph_CookingGraphFormatException___ctor(uVar21,uVar11,uVar3,lVar5);
                    uVar11 = thunk_FUN_03fc39d4(&DAT_091cfe20);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar21,uVar11);
                  }
                  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0442bf30;
                  iVar4 = CookingGraph_IngredientQueueTranslator__ParseInteger
                                    (*(undefined8 *)(lVar10 + 0x20),lVar5,uVar3);
                  if (*(int *)(lVar10 + 0x18) == 2) {
                    lVar10 = *(long *)(lVar10 + 0x28);
                    if (lVar10 == 0) goto LAB_0442bf2c;
                    if (*(int *)(lVar10 + 0x10) < 1) goto LAB_0442bcb8;
                    uVar3 = CookingGraph_IngredientQueueTranslator__ParseInteger(lVar10,lVar5,uVar3)
                    ;
                  }
                  else {
LAB_0442bcb8:
                    uVar3 = 1;
                  }
                  if (lVar9 == 0) goto LAB_0442bf2c;
                  lVar20 = *(long *)(lVar9 + 0x10);
                  lVar10 = thunk_FUN_03f9944c(DAT_09189918);
                  CookingGraph_QueueItemData___ctor();
                  if (lVar10 == 0) goto LAB_0442bf2c;
                  *(int *)(lVar10 + 0x14) = iVar4;
                  if (iVar4 == -2) {
                    *(undefined8 *)(lVar10 + 0x18) = 0xffffffff00000000;
                    uVar11 = DAT_0917c0e8;
                    *(undefined4 *)(lVar10 + 0x10) = 2;
                    uVar11 = thunk_FUN_03f9944c(uVar11);
                    FUN_057e0400(uVar11,DAT_091ac848);
                  }
                  else {
                    if (iVar4 < 0) {
                      iVar4 = -1;
                      uVar3 = 1;
                      uVar14 = 1;
                    }
                    else {
                      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar3 = System_Math__Max(1,uVar3,0);
                      uVar14 = 0;
                    }
                    *(undefined4 *)(lVar10 + 0x18) = uVar3;
                    *(int *)(lVar10 + 0x1c) = iVar4;
                    *(undefined4 *)(lVar10 + 0x10) = uVar14;
                  }
                  *(undefined8 *)(lVar10 + 0x28) = uVar11;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x28),uVar11);
                  lVar2 = DAT_091af4c8;
                  if (lVar20 == 0) goto LAB_0442bf2c;
                  lVar16 = *(long *)(lVar20 + 0x10);
                  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_0442bf2c;
                  uVar1 = *(uint *)(lVar20 + 0x18);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar20 + 0x18) = uVar1 + 1;
                    plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar12 = lVar10;
                    thunk_FUN_03f5d7b8(plVar12,lVar10);
                  }
                  else {
                    FUN_057e0c68(lVar20,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar15 = (ulong)*(uint *)(lVar19 + 0x18);
                  uVar8 = uVar8 + 1;
                } while ((long)uVar8 < (long)(int)*(uint *)(lVar19 + 0x18));
              }
              if (lVar7 == 0) goto LAB_0442bf2c;
              lVar19 = *(long *)(lVar7 + 0x10);
              lVar10 = DAT_091ada68;
            }
            DAT_091ada68 = lVar10;
            if (lVar19 == 0) goto LAB_0442bf2c;
            lVar20 = *(long *)(lVar19 + 0x10);
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_0442bf2c;
            uVar1 = *(uint *)(lVar19 + 0x18);
            if (uVar1 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar19 + 0x18) = uVar1 + 1;
              plVar12 = (long *)(lVar20 + (long)(int)uVar1 * 8 + 0x20);
              *plVar12 = lVar9;
              thunk_FUN_03f5d7b8(plVar12,lVar9);
            }
            else {
              FUN_057e0c68(lVar19,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar1 = *(uint *)(lVar18 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar1);
        }
      }
      if (*(int *)(lVar6 + 0x18) < 2) {
        return lVar7;
      }
      if (lVar7 != 0) {
        lVar18 = *(long *)(lVar7 + 0x18);
        uVar11 = CookingGraph_IngredientQueueTranslator__ParseGroups
                           (*(undefined8 *)(lVar6 + 0x28),0,lVar5);
        if (lVar18 != 0) {
          FUN_057e0e78(lVar18,uVar11,DAT_091af4a0);
          if (2 < *(int *)(lVar6 + 0x18)) {
            lVar18 = *(long *)(lVar7 + 0x18);
            uVar11 = CookingGraph_IngredientQueueTranslator__ParseGroups
                               (*(undefined8 *)(lVar6 + 0x30),1,lVar5);
            if (lVar18 == 0) goto LAB_0442bf2c;
            FUN_057e0e78(lVar18,uVar11,DAT_091af4a0);
          }
          return lVar7;
        }
      }
    }
  }
LAB_0442bf2c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

