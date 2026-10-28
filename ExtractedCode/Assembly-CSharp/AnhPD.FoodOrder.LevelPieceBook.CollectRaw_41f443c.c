// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$CollectRaw
// address: 0x41f443c
// body: available
// range: 0x41f443c-0x41f4657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f4650 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelPieceBook__CollectRaw
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4,long param_5,
               undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int local_44;
  
  if ((DAT_09516b8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091b05f8);
    DAT_09516b8d = 1;
  }
  local_44 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_06fcbf70(*(long *)(param_1 + 0x50),param_3,&local_44,DAT_0919f9c8);
    iVar2 = AnhPD_FoodOrder_LevelPieceBook__CountMadeFor(param_1,param_3,param_6);
    if (local_44 < iVar2) {
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_06fca434(*(long *)(param_1 + 0x50),param_3,local_44 + 1,DAT_0919f9f0);
        return;
      }
    }
    else if (param_2 != 0) {
      uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetInputsOf
                        (param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x58),0);
      if ((uVar3 & 1) == 0) {
        uVar5 = thunk_FUN_03f9944c(DAT_09186c48);
        AnhPD_FoodOrder_IngredientState___ctor(uVar5,param_3,1,0);
        lVar4 = DAT_091adae8;
        if (param_5 != 0) {
          lVar8 = *(long *)(param_5 + 0x10);
          *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(param_5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(param_5 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar5;
              thunk_FUN_03f5d7b8(puVar6,uVar5);
              return;
            }
            FUN_057e0c68(param_5,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
      else if ((*(long *)(param_1 + 0x58) != 0) &&
              (lVar4 = FUN_057e28a4(*(long *)(param_1 + 0x58),DAT_091b05f8), lVar4 != 0)) {
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar3 = 0;
          uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            AnhPD_FoodOrder_LevelPieceBook__CollectRaw
                      (param_1,param_2,*(undefined8 *)(lVar4 + 0x20 + uVar3 * 8),param_4,param_5,
                       param_3);
            uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

