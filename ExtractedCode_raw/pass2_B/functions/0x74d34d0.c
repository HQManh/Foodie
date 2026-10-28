// rea decompile_all
// name: System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray
// address: 0x74d34d0
// body: available
// range: 0x74d34d0-0x74d34d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  void *__src;
  undefined8 uVar4;
  char *pcVar6;
  long lVar7;
  char *pcVar5;
  
  lVar7 = *param_1;
  iVar1 = FUN_03f98238(lVar7);
  lVar7 = FUN_03fb81f4(*(long *)(lVar7 + 0x40) + 0x20);
  uVar2 = FUN_03fb845c();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(lVar7 + 10) != '\x11') {
LAB_03f68204:
      if ((*(byte *)(*(long *)(param_2 + 8) + 9) & 1) != 0) {
        lVar7 = param_1[3];
        __src = (void *)FUN_03fbb4a0(param_2);
        memcpy(param_1 + 4,__src,(ulong)(uint)(iVar1 * (int)lVar7));
        return;
      }
      pcVar5 = "field_handle";
      pcVar6 = "Field doesn\'t have an RVA";
      goto LAB_03f68260;
    }
    lVar3 = thunk_FUN_03fc3840(lVar7);
    if (lVar3 != 0) {
      lVar7 = thunk_FUN_03fc3840(lVar7);
      if ((*(ushort *)(lVar7 + 0x135) >> 5 & 1) == 0) goto LAB_03f68204;
    }
  }
  pcVar5 = "array";
  pcVar6 = "Cannot initialize array containing references";
LAB_03f68260:
  uVar4 = FUN_03fa673c(pcVar5,pcVar6);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar4,0);
}

