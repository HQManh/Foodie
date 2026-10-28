// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodResponse$$get_MethodBase
// address: 0x74a6fb4
// body: available
// range: 0x74a6fb4-0x74a70cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_Messaging_MethodResponse__get_MethodBase(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_095213b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095213b8 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x28);
  uVar1 = System_Reflection_MethodBase__op_Equality(0,*puVar6,0);
  if ((uVar1 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 == (long *)0x0) {
      lVar4 = System_Runtime_Remoting_Messaging_MethodResponse__get_MethodName(param_1);
      if ((lVar4 == 0) ||
         (lVar4 = System_Runtime_Remoting_Messaging_MethodResponse__get_TypeName(param_1),
         lVar4 == 0)) goto LAB_074a70c0;
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Runtime_Remoting_RemotingServices__GetMethodBaseFromMethodMessage(param_1,0);
    }
    else {
      lVar4 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_091860a8) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_074a70a4;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091860a8,3);
LAB_074a70a4:
      uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    }
    *puVar6 = uVar3;
    thunk_FUN_03f5d7b8(puVar6,uVar3);
  }
LAB_074a70c0:
  return *puVar6;
}

