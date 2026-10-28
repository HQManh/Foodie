// rea decompile_all
// name: Mono.Security.Cryptography.KeyPairPersistence$$Save
// address: 0x741fe98
// body: available
// range: 0x741fe98-0x742005f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7420054 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7420058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742005c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07420050) */

void Mono_Security_Cryptography_KeyPairPersistence__Save(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09520f7e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187500);
    FUN_03f5c2a4(&DAT_0918b328);
    DAT_09520f7e = 1;
  }
  uVar2 = Mono_Security_Cryptography_KeyPairPersistence__get_Filename(param_1);
  plVar3 = (long *)System_IO_File__Open(uVar2,2,0);
  uVar2 = System_Text_Encoding__get_UTF8(0);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b328);
  System_IO_StreamWriter___ctor(plVar4,plVar3,uVar2,0);
  uVar2 = Mono_Security_Cryptography_KeyPairPersistence__ToXml(param_1);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar2,uVar2);
  }
  (**(code **)(*plVar4 + 0x278))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x280));
  (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0741ffd4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0741ffd4:
    (*(code *)*puVar5)(plVar3,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x2c);
  uVar2 = Mono_Security_Cryptography_KeyPairPersistence__get_Filename(param_1);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09187500 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187500);
    }
    Mono_Security_Cryptography_KeyPairPersistence__ProtectUser(uVar2);
  }
  else {
    if (*(int *)(DAT_09187500 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187500);
    }
    Mono_Security_Cryptography_KeyPairPersistence__ProtectMachine(uVar2);
  }
  return;
}

