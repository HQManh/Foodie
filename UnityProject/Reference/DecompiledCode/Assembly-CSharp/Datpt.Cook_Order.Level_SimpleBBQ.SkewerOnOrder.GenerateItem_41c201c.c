// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewerOnOrder$$GenerateItem
// address: 0x41c201c
// body: available
// range: 0x41c201c-0x41c223b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c2204 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c2234 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c2238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewerOnOrder__GenerateItem
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_095169ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919cae0);
    FUN_03f5c2a4(&DAT_091adf50);
    FUN_03f5c2a4(&DAT_091d5000);
    FUN_03f5c2a4(&DAT_091f0158);
    FUN_03f5c2a4(&DAT_09194918);
    DAT_095169ab = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09194918);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x28) = param_4;
    *(undefined4 *)(lVar2 + 0x18) = param_1;
    *(undefined4 *)(lVar2 + 0x1c) = param_2;
    *(undefined4 *)(lVar2 + 0x20) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x28),param_4);
    if (*(long *)(param_4 + 0x60) != 0) {
      uVar3 = FUN_06f33e4c(*(long *)(param_4 + 0x60),param_5,DAT_0919cae0);
      lVar4 = FUN_04c384b8(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                           *(undefined4 *)(lVar2 + 0x20),uVar3,param_6,DAT_091d5000);
      plVar7 = (long *)(lVar2 + 0x10);
      *plVar7 = lVar4;
      thunk_FUN_03f5d7b8(plVar7,lVar4);
      lVar4 = *plVar7;
      uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar3,lVar2,DAT_091f0158,0);
      if (lVar4 != 0) {
        Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__OnAppear(lVar4,uVar3);
        if ((*plVar7 != 0) && (lVar2 = *(long *)(*plVar7 + 0x58), lVar2 != 0)) {
          UnityEngine_Rendering_SortingGroup__set_sortingOrder(lVar2,param_7,0);
          if (*plVar7 != 0) {
            Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__OnSetUpSkewerEnd();
            lVar2 = DAT_091adf50;
            lVar4 = *(long *)(param_4 + 0x68);
            if (lVar4 != 0) {
              lVar6 = *(long *)(lVar4 + 0x10);
              lVar5 = *plVar7;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                  thunk_FUN_03f5d7b8();
                  return;
                }
                FUN_057e0c68(lVar4,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

