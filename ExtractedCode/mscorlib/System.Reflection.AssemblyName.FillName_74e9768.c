// rea decompile_all
// name: System.Reflection.AssemblyName$$FillName
// address: 0x74e9768
// body: available
// range: 0x74e9768-0x74e9a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e9a10 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e9a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9a38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_AssemblyName__FillName
               (long param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,ulong param_5,
               uint param_6,uint param_7)

{
  long lVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  
  if ((DAT_095215dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09177300);
    FUN_03f5c2a4(&DAT_0918cc90);
    DAT_095215dc = 1;
  }
  if (param_2 == (undefined8 *)0x0) {
LAB_074e9a34:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar10 = Mono_RuntimeMarshal__PtrToUtf8String(*param_2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar10);
  uVar3 = *(ushort *)(param_2 + 8);
  uVar4 = *(ushort *)((long)param_2 + 0x42);
  uVar2 = *(undefined4 *)((long)param_2 + 0x34);
  uVar5 = *(ushort *)((long)param_2 + 0x44);
  uVar6 = *(ushort *)((long)param_2 + 0x46);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = 1;
  uVar7 = *(ushort *)(param_2 + 9);
  *(uint *)(param_1 + 0x20) = (uint)uVar3;
  *(uint *)(param_1 + 0x24) = (uint)uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(uint *)(param_1 + 0x28) = (uint)uVar5;
  *(uint *)(param_1 + 0x2c) = (uint)uVar6;
  *(uint *)(param_1 + 0x68) = (uint)uVar7;
  if ((param_4 & 1) != 0) {
    uVar10 = thunk_FUN_03f9944c(DAT_0918cc90);
    System_Version___ctor(uVar10,(uint)uVar3,(uint)uVar4,(uint)uVar5,(uint)uVar6,0);
    *(undefined8 *)(param_1 + 0x60) = uVar10;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar10);
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_3);
  if (param_2[1] != 0) {
    uVar10 = Mono_RuntimeMarshal__PtrToUtf8String(param_2[1],0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar10 = System_Globalization_CultureInfo__CreateCulture(uVar10,param_7 & 1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    thunk_FUN_03f5d7b8();
  }
  if (param_2[3] == 0) {
    if ((param_5 & 1) == 0) goto LAB_074e993c;
    if (*(int *)(DAT_09177300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = **(undefined8 **)(DAT_09177300 + 0xb8);
  }
  else {
    uVar10 = Mono_RuntimeMarshal__DecodeBlobArray(param_2[3],0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_03f5d7b8();
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
LAB_074e993c:
  pcVar13 = (char *)(param_2 + 4);
  if (*pcVar13 == '\0') {
    if ((param_6 & 1) == 0) {
      return;
    }
    if (*(int *)(DAT_09177300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = **(long **)(DAT_09177300 + 0xb8);
    *(long *)(param_1 + 0x50) = lVar11;
  }
  else {
    lVar11 = FUN_03f5c394(DAT_0917fc88,8);
    uVar12 = 0;
    do {
      iVar9 = Mono_RuntimeMarshal__AsciHexDigitValue(*pcVar13,0);
      if (lVar11 == 0) goto LAB_074e9a34;
      if (*(uint *)(lVar11 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar1 = lVar11 + uVar12;
      *(char *)(lVar1 + 0x20) = (char)(iVar9 << 4);
      bVar8 = Mono_RuntimeMarshal__AsciHexDigitValue(pcVar13[1],0);
      uVar12 = uVar12 + 1;
      pcVar13 = pcVar13 + 2;
      *(byte *)(lVar1 + 0x20) = bVar8 | (byte)(iVar9 << 4);
    } while (uVar12 != 8);
    *(long *)(param_1 + 0x50) = lVar11;
  }
  thunk_FUN_03f5d7b8(param_1 + 0x50,lVar11);
  return;
}

