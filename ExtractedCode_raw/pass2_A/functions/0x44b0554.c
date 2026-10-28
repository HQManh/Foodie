// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ReserveShelf
// address: 0x44b0554
// body: available
// range: 0x44b0554-0x44b06ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b06ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CookOrder_Cooking_Implement_CookingGameplayPresentation__ReserveShelf(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_24;
  
  if ((DAT_09518226 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9a8);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_0920c1a8);
    DAT_09518226 = 1;
  }
  local_24 = 0;
  iVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_ShelfCount(param_1);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if (*(long *)(param_1 + 0x330) == 0) goto LAB_044b06ec;
      uVar4 = FUN_06fca660(*(long *)(param_1 + 0x330),iVar2,DAT_0919f9a8);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + 0x1a8) != 0) {
          if (iVar2 < *(int *)(*(long *)(param_1 + 0x1a8) + 0x18)) {
            return iVar2;
          }
          lVar6 = CookOrder_Cooking_Implement_CookingGameplayPresentation__ShelfAt(param_1,iVar2);
          if ((lVar6 != 0) && (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 != 0))
          {
            UnityEngine_GameObject__SetActive(lVar6,1,0);
            return iVar2;
          }
        }
        goto LAB_044b06ec;
      }
      iVar2 = iVar2 + 1;
      iVar3 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_ShelfCount(param_1);
    } while (iVar2 < iVar3);
  }
  local_24 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_ShelfCount(param_1);
  uVar5 = System_Int32__ToString(&local_24,0);
  uVar5 = System_String__Concat(DAT_0920c1a8,uVar5,0);
  uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__NewAnchor
                    (uVar5,*(undefined8 *)(param_1 + 0x138));
  lVar6 = DAT_091b1080;
  lVar7 = *(long *)(param_1 + 0xf8);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      iVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_ShelfCount(param_1);
      return iVar2 + -1;
    }
  }
LAB_044b06ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

