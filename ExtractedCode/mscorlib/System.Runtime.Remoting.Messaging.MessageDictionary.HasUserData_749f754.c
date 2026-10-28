// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary$$HasUserData
// address: 0x749f754
// body: available
// range: 0x749f754-0x749f847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Runtime_Remoting_Messaging_MessageDictionary__HasUserData(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  int *piVar6;
  
  bVar4 = DAT_0952139e;
  do {
    if ((bVar4 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091857d8);
      FUN_03f5c2a4(&DAT_09188128);
      DAT_0952139e = 1;
    }
    param_1 = (long *)param_1[2];
    if (param_1 == (long *)0x0) {
      return false;
    }
    lVar3 = *param_1;
  } while ((*(byte *)(DAT_09188128 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
          (bVar4 = 1,
          *(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_09188128 + 0x130) * 8 + -8) ==
          DAT_09188128));
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_091857d8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_0749f824;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_091857d8,1);
LAB_0749f824:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return 0 < iVar1;
}

