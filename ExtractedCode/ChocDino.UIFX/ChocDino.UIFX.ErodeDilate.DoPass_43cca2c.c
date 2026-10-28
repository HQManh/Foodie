// rea decompile_all
// name: ChocDino.UIFX.ErodeDilate$$DoPass
// address: 0x43cca2c
// body: available
// range: 0x43cca2c-0x43ccc1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ccbe8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43ccc18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ErodeDilate__DoPass
               (float param_1,float param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09517bfe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09190658);
    DAT_09517bfe = 1;
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if (*(int *)(DAT_09190658 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar4 == 0) goto LAB_043ccc18;
  UnityEngine_Material__SetFloat(param_2,lVar4,**(undefined4 **)(DAT_09190658 + 0xb8),0);
  if (*(long *)(param_3 + 0x20) == 0) goto LAB_043ccc18;
  UnityEngine_Material__SetFloat
            (param_1,*(long *)(param_3 + 0x20),*(undefined4 *)(*(long *)(DAT_09190658 + 0xb8) + 4),0
            );
  if (param_2 <= 0.0) {
    if (0.0 < param_1) {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      iVar1 = *(int *)(DAT_09184e48 + 0xe4);
      uVar3 = 4;
      uVar2 = 4;
      if (*(char *)(param_3 + 0x1c) != '\0') {
        uVar2 = 1;
      }
      goto joined_r0x043ccb44;
    }
    if (*(char *)(param_3 + 0x1c) == '\0') {
      if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Graphics__Blit(param_4,param_5,0);
      if (param_5 == 0) goto LAB_043ccc18;
      goto LAB_043ccbc0;
    }
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = 5;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    if (param_1 <= 0.0) {
      iVar1 = *(int *)(DAT_09184e48 + 0xe4);
      uVar3 = 3;
      uVar2 = 3;
      if (*(char *)(param_3 + 0x1c) != '\0') {
        uVar2 = 0;
      }
joined_r0x043ccb44:
      if (iVar1 == 0) {
        FUN_03f5c424(uVar3);
      }
    }
    else {
      if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = 2;
    }
  }
  UnityEngine_Graphics__Blit(param_4,param_5,uVar5,uVar2,0);
  if (param_5 != 0) {
LAB_043ccbc0:
    UnityEngine_Texture__IncrementUpdateCount(param_5,0);
    *(long *)(param_3 + 0x40) = param_5;
    thunk_FUN_03f5d7b8((long *)(param_3 + 0x40),param_5);
    return;
  }
LAB_043ccc18:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

