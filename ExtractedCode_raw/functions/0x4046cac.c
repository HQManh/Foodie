// rea decompile_all
// name: FUN_04046cac
// address: 0x4046cac
// body: available
// range: 0x4046cac-0x4046e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4046cec to 0x40339f8 FUN_040339f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4046e3c to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04046cac(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  
  psVar1 = (short *)*param_1;
  if (1 < (ulong)(param_1[1] - (long)psVar1)) {
    if (*psVar1 == 0x7354) {
      pcVar6 = "struct";
      uVar7 = 6;
      *param_1 = (long)(psVar1 + 1);
      lVar3 = FUN_040339f8(param_1,0);
    }
    else if (*psVar1 == 0x7554) {
      pcVar6 = "union";
      uVar7 = 5;
      *param_1 = (long)(psVar1 + 1);
      lVar3 = FUN_040339f8(param_1,0);
    }
    else {
      if (*psVar1 != 0x6554) goto LAB_04046cd4;
      pcVar6 = "enum";
      uVar7 = 4;
      *param_1 = (long)(psVar1 + 1);
      lVar3 = FUN_040339f8(param_1,0);
    }
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar8 = (void *)param_1[0x266];
    lVar4 = *(long *)((long)pvVar8 + 8);
    puVar2 = pvVar8;
    if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar2 = pvVar8;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar4 + 0x30;
    puVar5 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
    *puVar5 = &UNK_08fb0ab8;
    *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 6;
    *(long *)((long)puVar2 + lVar4 + 0x30) = lVar3;
    *(char **)((long)puVar2 + lVar4 + 0x20) = pcVar6;
    *(undefined8 *)((long)puVar2 + lVar4 + 0x28) = uVar7;
    *(ushort *)((long)puVar2 + lVar4 + 0x19) =
         *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | 0x540;
    return puVar5;
  }
LAB_04046cd4:
  puVar2 = (undefined8 *)FUN_040339f8(param_1,0);
  return puVar2;
}

