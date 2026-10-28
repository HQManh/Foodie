// rea decompile_all
// name: Cysharp.Threading.Tasks.AsyncLazy$$EnsureInitializedCore
// address: 0x7d88950
// body: available
// range: 0x7d88950-0x7d88c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d88c14 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07d88c10) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Cysharp_Threading_Tasks_AsyncLazy__EnsureInitializedCore(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 local_68 [16];
  char local_54 [4];
  undefined1 local_50 [16];
  
  if ((DAT_09525d07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181718);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525d07 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  local_54[0] = '\0';
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  System_Threading_Monitor__Enter(uVar5,local_54,0);
  cVar1 = *(char *)(param_1 + 0x38);
  thunk_FUN_03f6a5cc();
  if (cVar1 != '\0') goto LAB_07d88bd8;
  lVar6 = FUN_03f957e4(param_1 + 0x10,0);
  if (lVar6 == 0) goto LAB_07d88bd8;
  local_50 = (**(code **)(lVar6 + 0x18))
                       (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  thunk_FUN_03f5d7b8(local_50,0);
  uVar3 = local_50._8_8_;
  uVar2 = local_50._0_8_;
  local_68 = local_50;
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
    if ((long *)uVar2 != (long *)0x0) goto LAB_07d88a90;
LAB_07d88af8:
    Cysharp_Threading_Tasks_AsyncLazy__SetCompletionSource(param_1,local_68);
  }
  else {
    if ((long *)uVar2 == (long *)0x0) goto LAB_07d88af8;
LAB_07d88a90:
    lVar6 = *(long *)uVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07d88ae4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(uVar2,DAT_091868c0,0);
LAB_07d88ae4:
    iVar4 = (*(code *)*puVar7)(uVar2,uVar3 & 0xffffffff,puVar7[1]);
    if (iVar4 != 0) goto LAB_07d88af8;
    *(undefined1 (*) [16])(param_1 + 0x20) = local_68;
    thunk_FUN_03f5d7b8(param_1 + 0x20,0);
    if (*(int *)(DAT_09181718 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = **(undefined8 **)(DAT_09181718 + 0xb8);
    if (DAT_0951da74 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_0951da74 = '\x01';
    }
    lVar6 = *(long *)uVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07d88bb0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(uVar2,DAT_091868c0,1);
LAB_07d88bb0:
    (*(code *)*puVar7)(uVar2,uVar10,param_1,uVar3 & 0xffffffff,puVar7[1]);
  }
  thunk_FUN_03f6a5cc();
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_07d88bd8:
  if (local_54[0] != '\0') {
    System_Threading_Monitor__Exit(uVar5,0);
  }
  return;
}

