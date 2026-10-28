// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode$$GetOrSpawnListToolRecipeCard
// address: 0x4322d30
// body: available
// range: 0x4322d30-0x4322edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4322edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_UIHomeTabPageMainDetailsMode__GetOrSpawnListToolRecipeCard
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_28;
  
  if ((DAT_09517663 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a00d8);
    FUN_03f5c2a4(&DAT_091a00e0);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4d18);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba250);
    DAT_09517663 = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar1 = FUN_06fd9fbc(*(long *)(param_1 + 0xa8),param_2,&local_28,DAT_091a00e0);
    if ((uVar1 & 1) != 0) {
      return local_28;
    }
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 0x20), lVar2 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0xa0);
      uVar3 = UnityEngine_Component__get_transform(lVar2,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      lVar2 = FUN_04c35338(uVar6,uVar3,DAT_091d4d18);
      if (lVar2 != 0) {
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar2,0);
        lVar4 = *(long *)(DAT_091b4a58 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if ((((*(long *)(param_1 + 0x48) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar5 != 0)) &&
            (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) {
          CakeOrder_Home_UIListToolRecipeCard__SetUp
                    (lVar2,**(undefined8 **)(lVar4 + 0xb8),param_2,*(undefined8 *)(lVar5 + 0x60),0);
          if (*(long *)(param_1 + 0xa8) != 0) {
            FUN_06fd8454(*(long *)(param_1 + 0xa8),param_2,lVar2,DAT_091a00d8);
            return lVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

