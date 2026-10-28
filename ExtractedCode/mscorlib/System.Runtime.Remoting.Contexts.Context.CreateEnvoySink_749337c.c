// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$CreateEnvoySink
// address: 0x749337c
// body: available
// range: 0x749337c-0x749351b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Contexts_Context__CreateEnvoySink(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_0952131b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2ed0);
    FUN_03f5c2a4(&DAT_091a2ed8);
    FUN_03f5c2a4(&DAT_091a2ee0);
    FUN_03f5c2a4(&DAT_09184118);
    FUN_03f5c2a4(&DAT_091858a8);
    FUN_03f5c2a4(&DAT_091ad118);
    DAT_0952131b = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09184118 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = **(undefined8 **)(DAT_09184118 + 0xb8);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_057e185c(&local_58,*(long *)(param_1 + 0x38),DAT_091ad118);
    while (uVar1 = FUN_071bd28c(&local_58,DAT_091a2ed8), (uVar1 & 1) != 0) {
      plVar2 = (long *)thunk_FUN_03f99350(local_48,DAT_091858a8);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_091858a8) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_074934d0;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091858a8,0);
LAB_074934d0:
        uVar6 = (*(code *)*puVar3)(plVar2,param_2,uVar6,puVar3[1]);
      }
    }
    FUN_071bd288(&local_58,DAT_091a2ed0);
  }
  return uVar6;
}

