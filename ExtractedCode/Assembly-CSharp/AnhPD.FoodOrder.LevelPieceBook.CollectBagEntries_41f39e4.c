// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$CollectBagEntries
// address: 0x41f39e4
// body: available
// range: 0x41f39e4-0x41f3b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f3b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelPieceBook__CollectBagEntries(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_09516b87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b87 = 1;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar3) {
      System_Array__Clear(*(undefined8 *)(param_2 + 0x10),0,iVar3,0);
    }
    if (DAT_09515fad == '\0') {
      FUN_03f5c2a4(&DAT_0918aec0);
      DAT_09515fad = '\x01';
    }
    lVar9 = **(long **)(DAT_0918aec0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar5 & 1) != 0) {
      if (lVar9 == 0) goto LAB_041f3b88;
      uVar5 = AnhPD_FoodOrder_SpawnBagSaveMe__get_IsEmpty(lVar9,0);
      if (((uVar5 & 1) == 0) &&
         (iVar3 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount(lVar9,0), 0 < iVar3)) {
        iVar3 = 0;
        do {
          uVar6 = AnhPD_FoodOrder_SpawnBagSaveMe__EntryIdAt(lVar9,iVar3,0);
          uVar5 = System_String__IsNullOrEmpty(uVar6,0);
          lVar2 = DAT_091b0570;
          if ((uVar5 & 1) == 0) {
            lVar8 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_041f3b88;
            uVar1 = *(uint *)(param_2 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar6;
              thunk_FUN_03f5d7b8(puVar7,uVar6);
            }
            else {
              FUN_057e0c68(param_2,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount(lVar9,0);
        } while (iVar3 < iVar4);
      }
    }
    return;
  }
LAB_041f3b88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

