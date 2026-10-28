// rea decompile_all
// name: System.Text.EncoderFallbackBuffer$$InternalFallback
// address: 0x74391b8
// body: available
// range: 0x74391b8-0x7439347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte System_Text_EncoderFallbackBuffer__InternalFallback(long *param_1,uint param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 extraout_w1;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint unaff_w23;
  undefined4 uStack_54;
  ulong uStack_50;
  long *plStack_48;
  
  uVar7 = *param_3 - param_1[2];
  uVar9 = (ulong)param_2;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  iVar2 = (int)(uVar7 >> 1) + -1;
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_Char__IsHighSurrogate(uVar9,0);
  if ((uVar7 & 1) == 0) {
LAB_074392a4:
    if (*(char *)((long)param_1 + 0x2a) != '\0') {
      iVar1 = *(int *)((long)param_1 + 0x2c);
      *(int *)((long)param_1 + 0x2c) = iVar1 + 1;
      if (0xfa < iVar1) {
        System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive(uVar7,param_2 & 0xffff);
LAB_07439320:
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Char__ConvertToUtf32(uVar9,unaff_w23,0);
        System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive(uVar7,uVar7 & 0xffffffff);
        uStack_54 = extraout_w1;
        uStack_50 = uVar9;
        plStack_48 = param_1;
        uVar4 = FUN_03f5c42c(DAT_09535420,&uStack_54);
        uVar5 = thunk_FUN_03fc39d4(&DAT_0920b760);
        uVar4 = SR__Format(uVar5,uVar4,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09218b60);
        System_ArgumentException___ctor(uVar5,uVar4,uVar6,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091c8bf0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
    }
    bVar3 = (**(code **)(*param_1 + 0x178))(param_1,uVar9,iVar2,*(undefined8 *)(*param_1 + 0x180));
  }
  else {
    if ((ushort *)param_1[3] <= (ushort *)*param_3) {
      lVar8 = param_1[4];
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x30) == '\0')) {
        if ((char)param_1[5] != '\0') {
          *(short *)(lVar8 + 0x20) = (short)param_2;
          *(undefined1 *)((long)param_1 + 0x29) = 1;
        }
        bVar3 = 0;
        *(undefined1 *)((long)param_1 + 0x2a) = 0;
        goto LAB_074392e0;
      }
      goto LAB_074392a4;
    }
    unaff_w23 = (uint)*(ushort *)*param_3;
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_Char__IsLowSurrogate(unaff_w23,0);
    if ((uVar7 & 1) == 0) goto LAB_074392a4;
    if ((*(char *)((long)param_1 + 0x2a) != '\0') &&
       (iVar1 = *(int *)((long)param_1 + 0x2c), *(int *)((long)param_1 + 0x2c) = iVar1 + 1,
       0xfa < iVar1)) goto LAB_07439320;
    *param_3 = *param_3 + 2;
    bVar3 = (**(code **)(*param_1 + 0x188))
                      (param_1,uVar9,unaff_w23,iVar2,*(undefined8 *)(*param_1 + 400));
  }
  *(byte *)((long)param_1 + 0x2a) = bVar3 & 1;
LAB_074392e0:
  return bVar3 & 1;
}

