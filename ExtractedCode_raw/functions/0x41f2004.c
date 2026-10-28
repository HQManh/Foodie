// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$CountLoose
// address: 0x41f2004
// body: available
// range: 0x41f2004-0x41f21f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f21e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f21ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f21f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f21f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_LevelPieceBook__CountLoose(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09516b7e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b7e = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (DAT_09515fad == '\0') {
    FUN_03f5c2a4(&DAT_0918aec0);
    DAT_09515fad = '\x01';
  }
  if (param_1 != 0) {
    lVar6 = **(long **)(DAT_0918aec0 + 0xb8);
    lVar2 = AnhPD_FoodOrder_MessyController__GetDragItems(param_1,0);
    if (lVar2 != 0) {
      FUN_057e185c(&local_78,lVar2,DAT_091ac6b0);
      iVar5 = 0;
      local_50 = local_68;
      uStack_58 = puStack_70;
      local_60 = local_78;
      local_78 = 0;
      puStack_70 = &local_60;
LAB_041f2108:
      do {
        do {
          uVar3 = FUN_071bd28c(&local_60,DAT_091a2a58);
          lVar2 = local_50;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(&local_60,DAT_091a2a50);
            return iVar5;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
        } while ((uVar3 & 1) == 0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = UnityEngine_Component__get_gameObject(lVar2,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar4,0);
      } while ((((uVar3 & 1) == 0) || (*(char *)(lVar2 + 0xe9) != '\0')) ||
              (*(char *)(lVar2 + 0xea) != '\0'));
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar6,0);
      if ((uVar3 & 1) != 0) goto code_r0x041f218c;
      goto LAB_041f21a4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x041f218c:
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = AnhPD_FoodOrder_SpawnBagSaveMe__IsPreview(lVar6,lVar2,0);
  if ((uVar3 & 1) == 0) {
LAB_041f21a4:
    uVar1 = System_String__op_Equality(*(undefined8 *)(lVar2 + 0x78),param_2,0);
    iVar5 = iVar5 + (uVar1 & 1);
  }
  goto LAB_041f2108;
}

