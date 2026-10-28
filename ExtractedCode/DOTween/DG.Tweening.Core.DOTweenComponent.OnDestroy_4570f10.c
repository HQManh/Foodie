// rea decompile_all
// name: DG.Tweening.Core.DOTweenComponent$$OnDestroy
// address: 0x4570f10
// body: available
// range: 0x4570f10-0x457137b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_DOTweenComponent__OnDestroy(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int local_28;
  int local_24;
  
  if ((DAT_095188ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f6a08);
    FUN_03f5c2a4(&DAT_091f63e0);
    FUN_03f5c2a4(&DAT_091f58a8);
    FUN_03f5c2a4(&DAT_092078c0);
    FUN_03f5c2a4(&DAT_091f6aa8);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_091f67e8);
    FUN_03f5c2a4(&DAT_091ffdb0);
    DAT_095188ad = 1;
  }
  local_24 = 0;
  if (*(char *)(param_1 + 0x35) == '\0') {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(DAT_09183190 + 0xb8);
    if (*(char *)(lVar7 + 0x14) != '\0') {
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar7 = *(long *)(DAT_09183190 + 0xb8);
      }
      uVar3 = System_Int32__ToString(lVar7 + 0x6c,0);
      uVar4 = System_Int32__ToString(*(long *)(DAT_09183190 + 0xb8) + 0x70,0);
      System_String__Concat(DAT_092078c0,uVar3,DAT_091f9400,uVar4,0);
      DG_Tweening_Core_Debugger__LogReport();
    }
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(DAT_09183190 + 0xb8);
    if (*(char *)(lVar7 + 8) != '\0') {
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar7 = *(long *)(DAT_09183190 + 0xb8);
      }
      iVar2 = DG_Tweening_Core_SafeModeReport__GetTotErrors(lVar7 + 0x74,0);
      if (0 < iVar2) {
        local_28 = iVar2;
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_28);
        uVar3 = System_String__Format(DAT_091ffdb0,uVar3,0);
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183190);
        }
        iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x74);
        if (0 < iVar2) {
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183190);
            iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x74);
          }
          local_24 = iVar2;
          uVar4 = System_Int32__ToString(&local_24,0);
          uVar3 = System_String__Concat(uVar3,DAT_091f58a8,uVar4,DAT_091f67e8,0);
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183190);
        }
        iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x7c);
        if (0 < iVar2) {
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183190);
            iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x7c);
          }
          local_24 = iVar2;
          uVar4 = System_Int32__ToString(&local_24,0);
          uVar3 = System_String__Concat(uVar3,DAT_091f58a8,uVar4,DAT_091f6a08,0);
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183190);
        }
        iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x78);
        if (0 < iVar2) {
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183190);
            iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x78);
          }
          local_24 = iVar2;
          uVar4 = System_Int32__ToString(&local_24,0);
          uVar3 = System_String__Concat(uVar3,DAT_091f58a8,uVar4,DAT_091f63e0,0);
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183190);
        }
        iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x80);
        if (0 < iVar2) {
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183190);
            iVar2 = *(int *)(*(long *)(DAT_09183190 + 0xb8) + 0x80);
          }
          local_24 = iVar2;
          uVar4 = System_Int32__ToString(&local_24,0);
          uVar3 = System_String__Concat(uVar3,DAT_091f58a8,uVar4,DAT_091f6aa8,0);
        }
        DG_Tweening_Core_Debugger__LogSafeModeReport(uVar3);
      }
    }
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = *(undefined8 *)(*(long *)(DAT_09183190 + 0xb8) + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar3,param_1,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar6 = (undefined8 *)(*(long *)(DAT_09183190 + 0xb8) + 0x60);
      *puVar6 = 0;
      thunk_FUN_03f5d7b8(puVar6,0);
    }
    cVar1 = *(char *)(param_1 + 0x34);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_DOTween__Clear(1,cVar1 != '\0',0);
  }
  return;
}

