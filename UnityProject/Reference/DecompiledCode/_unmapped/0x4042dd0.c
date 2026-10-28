// rea decompile_all
// name: FUN_04042dd0
// address: 0x4042dd0
// body: available
// range: 0x4042dd0-0x4043003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4042f04 to 0x4042cf8 FUN_04042cf8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4043000 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04042dd0(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
    puVar3 = (undefined8 *)FUN_04042cf8(param_1);
    return puVar3;
  }
  if ((ulong)((long)pbVar2 - (long)pbVar1) < 2) {
LAB_04042e2c:
    puVar3 = (undefined8 *)FUN_04043124(param_1,0);
  }
  else {
    if (*(short *)pbVar1 == 0x6e64) {
      pbVar1 = pbVar1 + 2;
      *param_1 = (long)pbVar1;
      if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
        lVar4 = FUN_04042b74(param_1);
      }
      else {
        lVar4 = FUN_04042cf8(param_1);
      }
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar8 + 8);
      puVar3 = pvVar8;
      if (0xfffffffffffff00f < lVar6 - 0xfd0U) {
LAB_04042f70:
        *(long *)((long)puVar3 + 8) = lVar6 + 0x20;
        puVar7 = (undefined8 *)((long)puVar3 + lVar6 + 0x10);
        *puVar7 = &UNK_08fafaf8;
        *(long *)((long)puVar3 + lVar6 + 0x20) = lVar4;
        *(undefined1 *)((long)puVar3 + lVar6 + 0x18) = 0x32;
        *(ushort *)((long)puVar3 + lVar6 + 0x19) =
             *(ushort *)((long)puVar3 + lVar6 + 0x19) & 0xf000 | 0x540;
        return puVar7;
      }
      puVar3 = malloc(0x1000);
      if (puVar3 != (void *)0x0) {
        lVar6 = 0;
        *puVar3 = pvVar8;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
        goto LAB_04042f70;
      }
      goto LAB_04043000;
    }
    if (*(short *)pbVar1 != 0x6e6f) goto LAB_04042e2c;
    *param_1 = (long)(pbVar1 + 2);
    puVar3 = (undefined8 *)FUN_04043124(param_1,0);
  }
  puVar7 = puVar3;
  if (((puVar3 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
     (*(char *)*param_1 == 'I')) {
    lVar4 = FUN_04035dcc(param_1,0);
    puVar7 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      pvVar8 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar8 + 8);
      puVar5 = pvVar8;
      if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) {
LAB_04043000:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
      puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
      *puVar7 = &UNK_08fb0188;
      *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar3;
      *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
      *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
      *(ushort *)((long)puVar5 + lVar6 + 0x19) =
           *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
    }
  }
  return puVar7;
}

