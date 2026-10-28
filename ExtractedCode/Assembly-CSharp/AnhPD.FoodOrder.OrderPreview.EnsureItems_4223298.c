// rea decompile_all
// name: AnhPD.FoodOrder.OrderPreview$$EnsureItems
// address: 0x4223298
// body: available
// range: 0x4223298-0x4223453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422343c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPreview__EnsureItems(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_09516d39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aecd8);
    FUN_03f5c2a4(&DAT_091aece0);
    FUN_03f5c2a4(&DAT_091aece8);
    FUN_03f5c2a4(&DAT_091d4c30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d39 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = FUN_057e0998(*(long *)(param_1 + 0x20),0,DAT_091aece8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      while( true ) {
        if (param_2 <= *(int *)(lVar7 + 0x18)) {
          return;
        }
        if ((lVar2 == 0) || (lVar7 = UnityEngine_Component__get_transform(lVar2,0), lVar7 == 0))
        break;
        uVar4 = UnityEngine_Transform__GetParent(lVar7,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar7 = FUN_04c35338(lVar2,uVar4,DAT_091d4c30);
        if ((lVar7 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar7,0), lVar5 == 0))
        break;
        UnityEngine_Transform__SetAsLastSibling(lVar5,0);
        lVar5 = DAT_091aecd8;
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 == 0) break;
        lVar8 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar7;
          thunk_FUN_03f5d7b8(plVar9,lVar7);
        }
        else {
          FUN_057e0c68(lVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 == 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

