// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$GetClientContextSinkChain
// address: 0x749271c
// body: available
// range: 0x749271c-0x74928d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Contexts_Context__GetClientContextSinkChain(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09521319 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825c8);
    FUN_03f5c2a4(&DAT_091a2ed0);
    FUN_03f5c2a4(&DAT_091a2ed8);
    FUN_03f5c2a4(&DAT_091a2ee0);
    FUN_03f5c2a4(&DAT_09185898);
    FUN_03f5c2a4(&DAT_091ad118);
    DAT_09521319 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  plVar6 = (long *)(param_1 + 0x30);
  local_38 = 0;
  if (*plVar6 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_091825c8);
    System_Object___ctor(lVar1,0);
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    *(long *)(param_1 + 0x30) = lVar1;
    thunk_FUN_03f5d7b8(plVar6,lVar1);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_057e185c(&local_48,*(long *)(param_1 + 0x38),DAT_091ad118);
      while (uVar2 = FUN_071bd28c(&local_48,DAT_091a2ed8), (uVar2 & 1) != 0) {
        plVar3 = (long *)thunk_FUN_03f99350(local_38,DAT_09185898);
        if (plVar3 != (long *)0x0) {
          lVar1 = *plVar3;
          lVar7 = *plVar6;
          uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_09185898) {
                puVar4 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_07492884;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185898,0);
LAB_07492884:
          lVar1 = (*(code *)*puVar4)(plVar3,lVar7,puVar4[1]);
          *plVar6 = lVar1;
          thunk_FUN_03f5d7b8(plVar6);
        }
      }
      FUN_071bd288(&local_48,DAT_091a2ed0);
    }
  }
  return *plVar6;
}

