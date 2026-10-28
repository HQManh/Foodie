// rea decompile_all
// name: Cysharp.Threading.Tasks.AsyncLazy$$.ctor
// address: 0x7d8842c
// body: available
// range: 0x7d8842c-0x7d886c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_AsyncLazy___ctor(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *local_60;
  ulong uStack_58;
  long *local_50;
  ulong uStack_48;
  
  if ((DAT_09525d05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181718);
    FUN_03f5c2a4(&DAT_0918c618);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525d05 = 1;
  }
  local_60 = (long *)0x0;
  uStack_58 = 0;
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),0);
  uVar4 = thunk_FUN_03f9944c(DAT_0918c618);
  System_Object___ctor(uVar4,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
  lVar6 = DAT_0918c610;
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = param_2;
  uStack_48 = param_3;
  thunk_FUN_03f5d7b8(&local_50,0);
  uVar2 = uStack_48;
  plVar1 = local_50;
  local_60 = local_50;
  uStack_58 = uStack_48;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07d885cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,0);
LAB_07d885cc:
    iVar3 = (*(code *)*puVar5)(plVar1,uVar2 & 0xffffffff,puVar5[1]);
    if (iVar3 == 0) {
      *(ulong *)(param_1 + 0x28) = uStack_58;
      *(long **)(param_1 + 0x20) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x20,0);
      if (*(int *)(DAT_09181718 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = **(undefined8 **)(DAT_09181718 + 0xb8);
      if (DAT_0951da74 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_0951da74 = '\x01';
      }
      lVar6 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_07d88698;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,1);
LAB_07d88698:
      (*(code *)*puVar5)(plVar1,uVar4,param_1,uVar2 & 0xffffffff,puVar5[1]);
      return;
    }
  }
  Cysharp_Threading_Tasks_AsyncLazy__SetCompletionSource(param_1,&local_60);
  return;
}

