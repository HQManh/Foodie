// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodPieceDisplay$$SetSprite
// address: 0x4131ea0
// body: available
// range: 0x4131ea0-0x4131fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4131fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SeafoodPieceDisplay__SetSprite
               (float param_1,float param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [12];
  float local_4c;
  float local_48;
  
  if ((DAT_09516344 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516344 = 1;
  }
  if (param_3 != 0) {
    UnityEngine_SpriteRenderer__set_sprite(param_3,param_4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_4,0);
    fVar5 = 1.0;
    if ((uVar1 & 1) != 0) {
      if (param_4 == 0) goto LAB_04131fb4;
      UnityEngine_Sprite__get_bounds(auStack_58,param_4,0);
      UnityEngine_Sprite__get_bounds(auStack_58,param_4,0);
      fVar5 = local_4c + local_4c;
      if (local_4c + local_4c <= local_48 + local_48) {
        fVar5 = local_48 + local_48;
      }
    }
    lVar2 = UnityEngine_Component__get_transform(param_3,0);
    if (lVar2 != 0) {
      fVar4 = param_1;
      if (param_1 <= param_2) {
        fVar4 = param_2;
      }
      fVar3 = 0.01;
      if (0.01 <= fVar5) {
        fVar3 = fVar5;
      }
      UnityEngine_Transform__set_localScale(param_1 / fVar3,param_2 / fVar3,fVar4 / fVar3,lVar2,0);
      return;
    }
  }
LAB_04131fb4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

