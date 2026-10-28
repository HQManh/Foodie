// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskValueTaskExtensions.<AsUniTask>d__3$$MoveNext
// address: 0x7d90f2c
// body: available
// range: 0x7d90f2c-0x7d910e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskValueTaskExtensions_<AsUniTask>d__3__MoveNext(int *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined1 local_30 [16];
  
  if ((DAT_09525d78 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f38);
    FUN_03f5c2a4(&DAT_0918cae8);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09525d78 = 1;
  }
  local_30._8_8_ = 0;
  local_30._0_8_ = 0;
  if (*param_1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_30 = System_Threading_Tasks_ValueTask__GetAwaiter(param_1 + 6,0);
    if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918cae8);
    }
    uVar2 = FUN_07467d78(local_30,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049b0224(param_1 + 2,local_30,param_1,DAT_091c1f38);
      return;
    }
  }
  if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_07467eb8(local_30,0);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar6 = *(long **)(param_1 + 2);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091866a8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_07d910cc;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,2);
LAB_07d910cc:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  return;
}

