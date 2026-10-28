// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$GenerateItem
// address: 0x41c0a10
// body: available
// range: 0x41c0a10-0x41c0c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c0c60 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c0c90 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c0c94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__GenerateItem
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((DAT_09516999 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919cae0);
    FUN_03f5c2a4(&DAT_091adf50);
    FUN_03f5c2a4(&DAT_091d5000);
    FUN_03f5c2a4(&DAT_091f0118);
    FUN_03f5c2a4(&DAT_091948e0);
    DAT_09516999 = 1;
  }
  if (*(long *)(param_4 + 0x108) != 0) {
    uVar2 = FUN_06f33e4c(*(long *)(param_4 + 0x108),param_5,DAT_0919cae0);
    lVar3 = FUN_04c384b8(param_1,param_2,param_3,uVar2,param_6,DAT_091d5000);
    if (lVar3 != 0) {
      lVar4 = UnityEngine_Component__get_transform(lVar3,0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (lVar4 != 0) {
        lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar4,0);
        lVar4 = UnityEngine_Component__get_transform(lVar3,0);
        if (lVar4 != 0) {
          UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar4,0);
          if (*(int *)(DAT_091948e0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar7 = *(undefined8 **)(DAT_091948e0 + 0xb8);
          lVar4 = puVar7[2];
          if (lVar4 == 0) {
            if (*(int *)(DAT_091948e0 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar7 = *(undefined8 **)(DAT_091948e0 + 0xb8);
            }
            uVar2 = *puVar7;
            lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(lVar4,uVar2,DAT_091f0118,0);
            plVar5 = (long *)(*(long *)(DAT_091948e0 + 0xb8) + 0x10);
            *plVar5 = lVar4;
            thunk_FUN_03f5d7b8(plVar5,lVar4);
          }
          Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__OnAppear(lVar3,lVar4);
          if (*(long *)(lVar3 + 0x58) != 0) {
            UnityEngine_Rendering_SortingGroup__set_sortingOrder(*(long *)(lVar3 + 0x58),param_7,0);
            lVar4 = DAT_091adf50;
            lVar6 = *(long *)(param_4 + 0x118);
            if (lVar6 != 0) {
              lVar8 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar3;
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  thunk_FUN_03f5d7b8(plVar5,lVar3);
                  return;
                }
                FUN_057e0c68(lVar6,lVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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

