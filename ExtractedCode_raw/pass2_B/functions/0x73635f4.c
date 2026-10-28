// rea decompile_all
// name: Lofelt.NiceVibrations.DeviceCapabilities$$.cctor
// address: 0x73635f4
// body: available
// range: 0x73635f4-0x736371b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7363718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_DeviceCapabilities___cctor(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if ((DAT_09520879 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09183ae0);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09520879 = 1;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Application__get_platform(0);
  puVar7 = *(undefined4 **)(DAT_09183ae0 + 0xb8);
  *puVar7 = uVar2;
  puVar7[1] = 0;
  *(undefined1 *)((long)puVar7 + 9) = 0;
  lVar4 = UnityEngine_SystemInfo__GetOperatingSystem(0);
  lVar5 = UnityEngine_SystemInfo__GetOperatingSystem(0);
  if ((lVar5 != 0) && (iVar3 = System_String__IndexOf(lVar5,DAT_091f8a38,0), lVar4 != 0)) {
    uVar6 = System_String__Substring(lVar4,iVar3 + 1,3,0);
    uVar2 = System_Int32__Parse(uVar6,0);
    cVar1 = DAT_095208d6;
    lVar4 = DAT_09183ae0;
    *(undefined4 *)(*(long *)(DAT_09183ae0 + 0xb8) + 4) = uVar2;
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_09183ae0);
      DAT_095208d6 = '\x01';
      lVar4 = DAT_09183ae0;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424(lVar4);
      lVar4 = DAT_09183ae0;
    }
    *(bool *)(*(long *)(lVar4 + 0xb8) + 9) = 0x10 < *(int *)(*(long *)(lVar4 + 0xb8) + 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

