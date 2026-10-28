// rea decompile_all
// name: System.IO.Path$$TryJoin
// address: 0x758e4cc
// body: available
// range: 0x758e4cc-0x758e6e7 inclusive
// range: 0x758e6ec-0x758e73b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758e6e4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758e738 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_IO_Path__TryJoin
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
          undefined8 param_6,int *param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  plVar5 = &local_80;
  local_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_1;
  local_58 = param_2;
  if ((DAT_09521b4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091b97d0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521b4d = 1;
  }
  *param_7 = 0;
  iVar8 = (int)param_2;
  iVar9 = (int)param_4;
  uVar7 = (uint)param_6;
  if (iVar8 == 0) {
    if (iVar9 != 0) {
      puVar4 = &uStack_70;
      goto LAB_0758e5e8;
    }
LAB_0758e718:
    uVar3 = 1;
  }
  else {
    if (iVar9 == 0) {
      puVar4 = &uStack_60;
      param_4 = param_2 & 0xffffffff;
LAB_0758e5e8:
      if ((int)param_4 <= (int)uVar7) {
        puVar1 = &uStack_70;
        if (iVar8 != 0) {
          puVar1 = &uStack_60;
        }
        FUN_05ff6b08(puVar1,param_5,param_6,DAT_091b97d0);
        iVar6 = *(int *)(puVar4 + 1);
        goto LAB_0758e714;
      }
    }
    else {
      if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_IO_PathInternal__EndsInDirectorySeparator(param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_IO_PathInternal__StartsWithDirectorySeparator(param_3,param_4,0);
        if ((uVar2 & 1) != 0) goto LAB_0758e5c4;
        uVar10 = 0;
        iVar6 = 1;
      }
      else {
LAB_0758e5c4:
        iVar6 = 0;
        uVar10 = 1;
      }
      iVar6 = iVar6 + iVar8 + iVar9;
      if (iVar6 <= (int)uVar7) {
        FUN_05ff6b08(&uStack_60,param_5,param_6,DAT_091b97d0);
        uVar11 = (uint)local_58;
        if (uVar10 == 0) {
          if (uVar7 <= (uint)local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar5 = (long *)0x0;
          *(undefined2 *)(param_5 + (long)(int)uVar11 * 2) =
               *(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 10);
          uVar11 = (uint)local_58;
        }
        if (uVar10 == 0) {
          plVar5 = &local_80;
        }
        uVar11 = uVar11 + (uVar10 ^ 1);
        uVar7 = *(uint *)((long)plVar5 + 8);
        if (uVar7 < uVar11) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        FUN_05ff6b08(&uStack_70,param_5 + (long)(int)uVar11 * 2,uVar7 - uVar11,DAT_091b97d0);
LAB_0758e714:
        *param_7 = iVar6;
        goto LAB_0758e718;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

