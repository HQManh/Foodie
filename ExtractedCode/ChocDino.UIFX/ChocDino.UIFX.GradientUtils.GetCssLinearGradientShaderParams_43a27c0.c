// rea decompile_all
// name: ChocDino.UIFX.GradientUtils$$GetCssLinearGradientShaderParams
// address: 0x43a27c0
// body: available
// range: 0x43a27c0-0x43a2a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_GradientUtils__GetCssLinearGradientShaderParams
               (float param_1,float param_2,float param_3,float param_4,float param_5,float *param_6
               ,float *param_7,float *param_8,float *param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_88;
  float fStack_84;
  float local_38;
  float fStack_34;
  
  if ((DAT_09517aae & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_092059f8);
    DAT_09517aae = 1;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar2 = fmodf(param_1,360.0);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = -0x80000000;
  if ((float)(int)(fVar2 / 90.0) != INFINITY) {
    iVar1 = (int)(fVar2 / 90.0);
  }
  fVar2 = param_3;
  fVar3 = param_2;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_043a29a4;
    if (iVar1 == 1) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar2 = param_5 + param_3;
      goto LAB_043a29a4;
    }
  }
  else {
    if (iVar1 == 2) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09517b1a == '\0') {
        FUN_03f5c2a4(&DAT_09189c30);
        DAT_09517b1a = '\x01';
      }
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar2 = param_5 + param_3;
      fVar3 = param_4 + param_2;
      goto LAB_043a29a4;
    }
    if (iVar1 == 3) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar3 = param_4 + param_2;
      goto LAB_043a29a4;
    }
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogError(DAT_092059f8,0);
LAB_043a29a4:
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *param_9 = param_4 / param_5;
  sincosf(param_1 * 0.017453292,&fStack_34,&local_38);
  fVar3 = (fVar3 - param_2) / param_4;
  *param_8 = ABS(local_38) + ABS(fStack_34 * (param_4 / param_5));
  *param_6 = fVar3;
  param_6[1] = (fVar2 - param_3) / param_5;
  *param_6 = fVar3 * *param_9;
  sincosf(param_1 * 0.017453292 + 1.5707964,&fStack_84,&local_88);
  *param_7 = fStack_84;
  param_7[1] = local_88;
  return;
}

