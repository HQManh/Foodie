// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$SetCJKReferences
// address: 0x7415e20
// body: available
// range: 0x7415e20-0x741607f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7415fdc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_MSCompatUnicodeTable__SetCJKReferences
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09520f47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d40);
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0921dd60);
    FUN_03f5c2a4(&DAT_0921e0c0);
    FUN_03f5c2a4(&DAT_09225e50);
    FUN_03f5c2a4(&DAT_09225e48);
    DAT_09520f47 = 1;
  }
  uVar2 = System_String__op_Equality(param_1,DAT_09225e48,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality(param_1,DAT_09225e50,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__op_Equality(param_1,DAT_0921dd60,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = System_String__op_Equality(param_1,DAT_0921e0c0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = DAT_09187d40;
        lVar5 = *(long *)(DAT_09187d38 + 0xb8);
        uVar4 = *(undefined8 *)(lVar5 + 0x68);
        uVar6 = *(undefined8 *)(lVar5 + 0x70);
        iVar1 = *(int *)(DAT_09187d40 + 0xe4);
        *param_3 = *(undefined8 *)(lVar5 + 0x48);
        *param_4 = uVar4;
        *param_6 = uVar6;
        if (iVar1 == 0) {
          FUN_03f5c424();
          lVar3 = DAT_09187d40;
        }
        *param_2 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
        thunk_FUN_03f5d7b8(param_2);
        *param_5 = *(undefined8 *)(*(long *)(DAT_09187d40 + 0xb8) + 0x30);
        goto LAB_07415fc8;
      }
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x40);
      uVar4 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x60);
    }
    else {
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x38);
      uVar4 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x58);
    }
    lVar3 = DAT_09187d40;
    iVar1 = *(int *)(DAT_09187d40 + 0xe4);
    *param_3 = uVar6;
    *param_4 = uVar4;
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar3 = DAT_09187d40;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DAT_09187d40;
    uVar4 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x50);
    iVar1 = *(int *)(DAT_09187d40 + 0xe4);
    *param_3 = *(undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x30);
    *param_4 = uVar4;
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar3 = DAT_09187d40;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
  }
  *param_2 = uVar4;
  param_5 = param_2;
LAB_07415fc8:
  thunk_FUN_03f5d7b8(param_5);
  return;
}

