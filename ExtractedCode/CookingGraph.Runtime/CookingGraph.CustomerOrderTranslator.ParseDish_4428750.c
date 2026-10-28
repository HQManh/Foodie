// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$ParseDish
// address: 0x4428750
// body: available
// range: 0x4428750-0x4428a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44289e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CustomerOrderTranslator__ParseDish(ulong param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  
  if ((DAT_09517f56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918f9c0);
    FUN_03f5c2a4(&DAT_09183bb0);
    FUN_03f5c2a4(&DAT_091ac848);
    FUN_03f5c2a4(&DAT_0917c0e8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09225918);
    FUN_03f5c2a4(&DAT_091faf68);
    FUN_03f5c2a4(&DAT_09211f48);
    FUN_03f5c2a4(&DAT_091f6d50);
    DAT_09517f56 = 1;
  }
  if (param_1 != 0) {
    iVar1 = System_String__IndexOf(param_1,0x23,0);
    if (iVar1 < 0) {
      lVar4 = **(long **)(DAT_09535468 + 0xb8);
      uVar3 = param_1;
    }
    else {
      uVar3 = System_String__Substring(param_1,0,iVar1,0);
      lVar4 = System_String__Substring(param_1,iVar1,0);
    }
    lVar5 = thunk_FUN_03f9944c(DAT_0918f9c0);
    System_Object___ctor(lVar5,0);
    lVar6 = CookingGraph_CustomerOrderTranslator__ParseNode(uVar3,lVar5,param_1);
    if ((lVar5 != 0) && (uVar3 != 0)) {
      if (*(int *)(lVar5 + 0x10) == *(int *)(uVar3 + 0x10)) {
        if (lVar6 == 0) goto LAB_044289e8;
        if (*(int *)(lVar6 + 0x10) == 1) {
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x10) == 0) {
              uVar7 = thunk_FUN_03f9944c(DAT_0917c0e8);
              FUN_057e0400(uVar7,DAT_091ac848);
            }
            else {
              uVar7 = System_String__Concat(DAT_09225918,lVar4,0);
              CookingGraph_IngredientQueueTranslator__ParseEffectToken(uVar7,param_2);
              uVar7 = extraout_x1;
            }
            lVar4 = thunk_FUN_03f9944c(DAT_09183bb0);
            CookingGraph_DishOrderData___ctor();
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x10) = lVar6;
              thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),lVar6);
              *(undefined8 *)(lVar4 + 0x18) = uVar7;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),uVar7);
              return lVar4;
            }
          }
          goto LAB_044289e8;
        }
      }
      else {
        uVar7 = System_String__Substring(uVar3,*(int *)(lVar5 + 0x10),0);
        uVar7 = System_String__Concat(DAT_09211f48,uVar7,DAT_091f6d50,0);
        if (param_2 == 0) goto LAB_044289e8;
        param_1 = System_String__IndexOf(param_2,param_1,4,0);
        param_1 = param_1 & 0xffffffff;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187e80);
        }
        iVar1 = System_Math__Max(0,param_1,0);
        CookingGraph_CustomerOrderTranslator__Fail(uVar7,param_2,*(int *)(lVar5 + 0x10) + iVar1);
      }
      if (param_2 != 0) {
        uVar2 = System_String__IndexOf(param_2,param_1,4,0);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187e80);
        }
        uVar2 = System_Math__Max(0,uVar2,0);
        uVar7 = CookingGraph_CustomerOrderTranslator__Fail(DAT_091faf68,param_2,uVar2);
        lVar4 = System_Object___ctor(uVar7,0);
        return lVar4;
      }
    }
  }
LAB_044289e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

