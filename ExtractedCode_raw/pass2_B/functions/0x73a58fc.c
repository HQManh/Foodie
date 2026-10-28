// rea decompile_all
// name: MessagePack.Utilities$$GetMemoryCheckResult
// address: 0x73a58fc
// body: available
// range: 0x73a58fc-0x73a5a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a5a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] MessagePack_Utilities__GetMemoryCheckResult(long *param_1,int param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 local_30 [16];
  
  if ((DAT_09520b85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179fa0);
    FUN_03f5c2a4(&DAT_091b4730);
    FUN_03f5c2a4(&DAT_091b4738);
    FUN_03f5c2a4(&DAT_092101c0);
    FUN_03f5c2a4(&DAT_092101b8);
    DAT_09520b85 = 1;
  }
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09179fa0) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_073a59c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09179fa0,1);
LAB_073a59c8:
    local_30 = (*(code *)*puVar3)(param_1,param_2,puVar3[1]);
    uVar8 = FUN_05a49a88(local_30,DAT_091b4730);
    if ((uVar8 & 1) == 0) {
      iVar2 = FUN_05a49a7c(local_30,DAT_091b4738);
      if (param_2 <= iVar2) {
        return local_30;
      }
      plVar4 = (long *)System_Object__GetType(param_1,0);
      auVar1 = local_30;
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
        puVar3 = &DAT_092101c0;
LAB_073a5a78:
        System_String__Concat(*puVar3,uVar5,0);
        uVar5 = MessagePack_Utilities__<GetMemoryCheckResult>g__ThrowInvalidOperationException_2_0()
        ;
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar6 = thunk_FUN_03f9944c();
        System_InvalidOperationException___ctor(uVar6,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091de858);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar5);
      }
    }
    else {
      plVar4 = (long *)System_Object__GetType(param_1,0);
      auVar1 = local_30;
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
        puVar3 = &DAT_092101b8;
        goto LAB_073a5a78;
      }
    }
  }
  local_30 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

