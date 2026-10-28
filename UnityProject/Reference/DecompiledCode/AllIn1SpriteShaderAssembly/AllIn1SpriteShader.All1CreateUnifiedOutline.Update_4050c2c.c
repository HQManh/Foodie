// rea decompile_all
// name: AllIn1SpriteShader.All1CreateUnifiedOutline$$Update
// address: 0x4050c2c
// body: available
// range: 0x4050c2c-0x4050df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4050df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4050df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AllIn1SpriteShader_All1CreateUnifiedOutline__Update(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  long local_28;
  
  if ((DAT_09515b0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4958);
    FUN_03f5c2a4(&DAT_091a4960);
    FUN_03f5c2a4(&DAT_091a4968);
    FUN_03f5c2a4(&DAT_091b1090);
    FUN_03f5c2a4(&DAT_091b1070);
    FUN_03f5c2a4(&DAT_0917cea8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515b0d = 1;
  }
  local_28 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = thunk_FUN_03f9944c(DAT_0917cea8);
      FUN_057e0400(lVar2,DAT_091b1070);
      local_28 = lVar2;
      uVar3 = UnityEngine_Component__get_transform(param_1,0);
      AllIn1SpriteShader_All1CreateUnifiedOutline__GetAllChildren(param_1,uVar3,&local_28);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_48,lVar2,DAT_091b1090);
      while (uVar1 = FUN_071bd28c(&local_48,DAT_091a4960), (uVar1 & 1) != 0) {
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = UnityEngine_Component__get_gameObject(local_38,0);
        AllIn1SpriteShader_All1CreateUnifiedOutline__CreateOutlineSpriteDuplicate(param_1,uVar3);
      }
      FUN_071bd288(&local_48,DAT_091a4958);
      uVar3 = UnityEngine_Component__get_gameObject(param_1,0);
      AllIn1SpriteShader_All1CreateUnifiedOutline__CreateOutlineSpriteDuplicate(param_1,uVar3);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Object__DestroyImmediate(param_1,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}

