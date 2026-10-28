// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$CreateSegmentClone
// address: 0x40f1d80
// body: available
// range: 0x40f1d80-0x40f1f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f1f2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientSpawnerController__CreateSegmentClone(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_24;
  
  if ((DAT_095160ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0400);
    FUN_03f5c2a4(&DAT_091b30d0);
    FUN_03f5c2a4(&DAT_091d4c68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092267b0);
    DAT_095160ee = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if ((lVar8 != 0) && (lVar2 = UnityEngine_Component__get_transform(lVar8,0), lVar2 != 0)) {
    uVar3 = UnityEngine_Transform__GetParent(lVar2,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar8 = FUN_04c35338(lVar8,uVar3,DAT_091d4c68);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x48) != 0) {
        local_24 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x18);
        uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
        uVar3 = System_String__Format(DAT_092267b0,uVar3,uVar4,0);
        if (lVar8 != 0) {
          UnityEngine_Object__SetName(lVar8,uVar3,0);
          lVar2 = DAT_091b0400;
          lVar5 = *(long *)(param_1 + 0x40);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar8;
                thunk_FUN_03f5d7b8(plVar7,lVar8);
              }
              else {
                FUN_057e0c68(lVar5,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              return lVar8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

