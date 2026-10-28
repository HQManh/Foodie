// rea decompile_all
// name: CookingGraph.IngredientQueueTranslator.<ParseGroups>d__10$$MoveNext
// address: 0x442d7d4
// body: available
// range: 0x442d7d4-0x442dcff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442dba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442dba8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442dc64 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442dcfc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_IngredientQueueTranslator_<ParseGroups>d__10__MoveNext(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  
  if ((DAT_09517f7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091af480);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189900);
    FUN_03f5c2a4(&DAT_09189908);
    DAT_09517f7d = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar10 = *(int *)(param_1 + 0x58) + 1;
    *(uint *)(param_1 + 0x58) = uVar10;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(param_1 + 0x28),0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar12 = *(long *)(param_1 + 0x28);
    lVar5 = FUN_03f5c394(DAT_0917fcc8,1);
    if (lVar5 == 0) goto LAB_0442dba4;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0442dba8;
    *(undefined2 *)(lVar5 + 0x20) = 0x3b;
    if (lVar12 == 0) goto LAB_0442dba4;
    uVar6 = System_String__Split(lVar12,lVar5,0,0);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar6);
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  plVar7 = (long *)(param_1 + 0x50);
  lVar5 = *plVar7;
  if (lVar5 != 0) {
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar10) {
      *plVar7 = 0;
      thunk_FUN_03f5d7b8(plVar7,0);
      return 0;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_0442dba8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar12 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
    lVar5 = thunk_FUN_03f9944c(DAT_09189908);
    CookingGraph_QueueGroupData___ctor();
    uVar6 = DAT_0917fcc8;
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_1 + 0x38);
      lVar8 = FUN_03f5c394(uVar6,1);
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0442dba8;
        *(undefined2 *)(lVar8 + 0x20) = 0x2c;
        if ((lVar12 != 0) && (lVar12 = System_String__Split(lVar12,lVar8,0,0), lVar12 != 0)) {
          uVar10 = *(uint *)(lVar12 + 0x18);
          if (0 < (int)uVar10) {
            uVar16 = 0;
            do {
              if (uVar10 <= uVar16) goto LAB_0442dba8;
              lVar13 = *(long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
              lVar8 = FUN_03f5c394(DAT_0917fcc8,1);
              if (lVar8 == 0) goto LAB_0442dba4;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0442dba8;
              *(undefined2 *)(lVar8 + 0x20) = 0x2d;
              if ((lVar13 == 0) || (lVar8 = System_String__Split(lVar13,lVar8,0,0), lVar8 == 0))
              goto LAB_0442dba4;
              if (*(int *)(lVar8 + 0x18) != 2) {
LAB_0442dbac:
                uVar6 = thunk_FUN_03fc39d4(&DAT_09205a00);
                uVar9 = thunk_FUN_03fc39d4(&DAT_091f6e50);
                uVar6 = System_String__Concat(uVar6,lVar13,uVar9,0);
                uVar9 = *(undefined8 *)(param_1 + 0x40);
                FUN_039b1d98(uVar9);
                uVar1 = System_String__IndexOf(uVar9,lVar13,4,0);
                thunk_FUN_03fc39d4(&DAT_09187e80);
                FUN_039afb80();
                uVar1 = System_Math__Max(0,uVar1,0);
                uVar11 = *(undefined8 *)(param_1 + 0x40);
                thunk_FUN_03fc39d4(&DAT_09182d98);
                uVar9 = thunk_FUN_03f9944c();
                CookingGraph_CookingGraphFormatException___ctor(uVar9,uVar6,uVar1,uVar11);
                uVar6 = thunk_FUN_03fc39d4(&DAT_091eba08);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar9,uVar6);
              }
              lVar14 = *(long *)(lVar8 + 0x20);
              if (lVar14 == 0) goto LAB_0442dba4;
              if (*(int *)(lVar14 + 0x10) == 0) goto LAB_0442dbac;
              if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0442dba4;
              if (*(int *)(*(long *)(lVar8 + 0x28) + 0x10) == 0) goto LAB_0442dbac;
              lVar15 = *(long *)(param_1 + 0x40);
              if (lVar15 == 0) goto LAB_0442dba4;
              uVar1 = System_String__IndexOf(lVar15,lVar13,4,0);
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09187e80);
              }
              uVar1 = System_Math__Max(0,uVar1,0);
              iVar2 = CookingGraph_IngredientQueueTranslator__ParseInteger(lVar14,lVar15,uVar1);
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0442dba8;
              lVar14 = *(long *)(param_1 + 0x40);
              if (lVar14 == 0) goto LAB_0442dba4;
              uVar6 = *(undefined8 *)(lVar8 + 0x28);
              uVar1 = System_String__IndexOf(lVar14,lVar13,4,0);
              uVar1 = System_Math__Max(0,uVar1,0);
              iVar3 = CookingGraph_IngredientQueueTranslator__ParseInteger(uVar6,lVar14,uVar1);
              if ((iVar2 < 0) || (iVar3 < 0)) {
                uVar6 = *(undefined8 *)(param_1 + 0x40);
                FUN_039b1d98(uVar6);
                uVar1 = System_String__IndexOf(uVar6,lVar13,4,0);
                thunk_FUN_03fc39d4(&DAT_09187e80);
                FUN_039afb80();
                uVar1 = System_Math__Max(0,uVar1,0);
                uVar11 = *(undefined8 *)(param_1 + 0x40);
                thunk_FUN_03fc39d4(&DAT_09182d98);
                uVar6 = thunk_FUN_03f9944c();
                uVar9 = thunk_FUN_03fc39d4(&DAT_0920b2c8);
                CookingGraph_CookingGraphFormatException___ctor(uVar6,uVar9,uVar1,uVar11);
                uVar9 = thunk_FUN_03fc39d4(&DAT_091eba08);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar6,uVar9);
              }
              lVar13 = *(long *)(lVar5 + 0x18);
              lVar8 = thunk_FUN_03f9944c(DAT_09189900);
              System_Object___ctor(lVar8,0);
              if (lVar8 == 0) goto LAB_0442dba4;
              *(int *)(lVar8 + 0x10) = iVar2;
              *(int *)(lVar8 + 0x14) = iVar3;
              lVar14 = DAT_091af480;
              if (lVar13 == 0) goto LAB_0442dba4;
              lVar15 = *(long *)(lVar13 + 0x10);
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_0442dba4;
              uVar10 = *(uint *)(lVar13 + 0x18);
              if (uVar10 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar10 + 1;
                plVar7 = (long *)(lVar15 + (long)(int)uVar10 * 8 + 0x20);
                *plVar7 = lVar8;
                thunk_FUN_03f5d7b8(plVar7,lVar8);
              }
              else {
                FUN_057e0c68(lVar13,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              uVar10 = *(uint *)(lVar12 + 0x18);
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 < (int)uVar10);
          }
          *(long *)(param_1 + 0x18) = lVar5;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),lVar5);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
    }
  }
LAB_0442dba4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

