// rea decompile_all
// name: FUN_0403f5b8
// address: 0x403f5b8
// body: available
// range: 0x403f5b8-0x403f707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403f698 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403f700 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403f704 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0403f5b8(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 *__src;
  long lVar6;
  void *pvVar7;
  
  lVar6 = *param_1;
  lVar4 = lVar6 + (long)param_2 * 4;
  iVar1 = *(int *)(lVar4 + 0x318);
  *(int *)(lVar4 + 0x318) = iVar1 + 1;
  pvVar7 = *(void **)(lVar6 + 0x1330);
  lVar4 = *(long *)((long)pvVar7 + 8);
  puVar2 = pvVar7;
  if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
    puVar2 = malloc(0x1000);
    if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar2 = pvVar7;
    puVar2[1] = 0;
    *(undefined8 **)(lVar6 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
  puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
  *puVar3 = &UNK_08faf008;
  *(int *)((long)puVar2 + lVar4 + 0x1c) = param_2;
  *(int *)((long)puVar2 + lVar4 + 0x20) = iVar1;
  *(ushort *)((long)puVar2 + lVar4 + 0x19) =
       *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | 0x540;
  puVar5 = (undefined8 *)param_1[1];
  *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 0x21;
  puVar5 = (undefined8 *)*puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar5[1];
    if (puVar2 == (undefined8 *)puVar5[2]) {
      __src = (undefined8 *)*puVar5;
      __n = (long)puVar2 - (long)__src;
      if (__src == puVar5 + 3) {
        pvVar7 = malloc(__n * 2);
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (puVar2 != __src) {
          memmove(pvVar7,__src,__n);
        }
        *puVar5 = pvVar7;
      }
      else {
        pvVar7 = realloc(__src,__n * 2);
        *puVar5 = pvVar7;
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      puVar2 = (undefined8 *)((long)pvVar7 + __n);
      puVar5[2] = (void *)((long)pvVar7 + ((long)__n >> 2) * 8);
    }
    puVar5[1] = puVar2 + 1;
    *puVar2 = puVar3;
  }
  return;
}

