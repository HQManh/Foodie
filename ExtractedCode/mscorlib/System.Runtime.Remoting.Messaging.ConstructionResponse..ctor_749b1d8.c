// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodResponse$$.ctor
// address: 0x749b1d8
// body: available
// range: 0x749b1d8-0x749b1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodResponse___ctor
               (long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_095213b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095213b3 = 1;
  }
  System_Object___ctor(param_1,0);
  *(long *)(param_1 + 0x60) = (long)param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x60),param_3);
  if (param_3 == (long *)0x0) {
    uVar2 = **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  else {
    lVar3 = *param_3;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091860a8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_0749795c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_3,DAT_091860a8,7);
LAB_0749795c:
    uVar2 = (*(code *)*puVar1)(param_3,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x38) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),param_2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
  uVar2 = FUN_03f5c394(DAT_09180318,0);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar2);
  return;
}

