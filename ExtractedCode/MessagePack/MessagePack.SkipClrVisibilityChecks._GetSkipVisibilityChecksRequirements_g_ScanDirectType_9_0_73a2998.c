// rea decompile_all
// name: MessagePack.SkipClrVisibilityChecks$$<GetSkipVisibilityChecksRequirements>g__ScanDirectType|9_0
// address: 0x73a2998
// body: available
// range: 0x73a2998-0x73a2daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a2da8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a2dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_SkipClrVisibilityChecks__<GetSkipVisibilityChecksRequirements>g__ScanDirectType_9_0
               (long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  ushort local_68 [2];
  ushort local_64 [2];
  
  if ((DAT_09520b67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ad00);
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_0918ad80);
    DAT_09520b67 = 1;
  }
  if ((param_1 == (long *)0x0) ||
     (lVar3 = (**(code **)(*param_1 + 0x748))(param_1,0x36,*(undefined8 *)(*param_1 + 0x750)),
     lVar3 == 0)) {
LAB_073a2dac:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
    return;
  }
  uVar10 = 0;
  uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
LAB_073a2a88:
  if (uVar6 <= uVar10) {
LAB_073a2da8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar9 = *(long **)(lVar3 + uVar10 * 8 + 0x20);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((bVar1 < *(byte *)(DAT_09184518 + 0x130)) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
        DAT_09184518)) {
      if ((bVar1 < *(byte *)(DAT_09189788 + 0x130)) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
          DAT_09189788)) {
        if ((*(byte *)(DAT_09182ac0 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09182ac0 + 0x130) * 8 + -8) ==
            DAT_09182ac0)) {
          uVar6 = System_Reflection_MethodBase__get_IsPublic(plVar9,0);
          if ((uVar6 & 1) == 0) {
            lVar7 = *param_2;
            plVar4 = (long *)(**(code **)(*param_1 + 0x308))
                                       (param_1,*(undefined8 *)(*param_1 + 0x310));
            if ((plVar4 == (long *)0x0) ||
               (uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0)),
               lVar7 == 0)) goto LAB_073a2dac;
            FUN_06c35e38(lVar7,uVar5,DAT_0919ad00);
          }
          lVar7 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
          if (lVar7 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar2) {
              uVar11 = 0;
              do {
                if (uVar2 <= uVar11) goto LAB_073a2da8;
                plVar9 = *(long **)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
                if (plVar9 == (long *)0x0) goto LAB_073a2dac;
                uVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                if (*(int *)(DAT_0918ad80 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918ad80);
                }
                MessagePack_SkipClrVisibilityChecks__<GetSkipVisibilityChecksRequirements>g__AddTypeIfNonPublic_9_1
                          (uVar5,param_2);
                uVar2 = *(uint *)(lVar7 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (int)uVar2);
            }
            goto LAB_073a2d78;
          }
          goto LAB_073a2dac;
        }
        goto LAB_073a2d78;
      }
      lVar7 = (**(code **)(lVar7 + 0x2f8))(plVar9,*(undefined8 *)(lVar7 + 0x300));
      if (lVar7 == 0) {
LAB_073a2ca4:
        lVar7 = (**(code **)(*plVar9 + 0x2c8))(plVar9,*(undefined8 *)(*plVar9 + 0x2d0));
        if (lVar7 != 0) {
          uVar2 = System_Reflection_MethodBase__get_IsPublic(lVar7,0);
          local_68[0] = 0;
          FUN_05c290f8(local_68,uVar2 & 1,DAT_091b6a48);
          if ((local_68[0] < 0x100) && ((local_68[0] & 0xff) != 0)) goto LAB_073a2cf8;
        }
      }
      else {
        uVar2 = System_Reflection_MethodBase__get_IsPublic(lVar7,0);
        local_64[0] = 0;
        FUN_05c290f8(local_64,uVar2 & 1,DAT_091b6a48);
        if ((0xff < local_64[0]) || ((local_64[0] & 0xff) == 0)) goto LAB_073a2ca4;
LAB_073a2cf8:
        lVar7 = *param_2;
        plVar4 = (long *)(**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
        if ((plVar4 == (long *)0x0) ||
           (uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0)),
           lVar7 == 0)) goto LAB_073a2dac;
        FUN_06c35e38(lVar7,uVar5,DAT_0919ad00);
      }
      pcVar8 = *(code **)(*plVar9 + 600);
      uVar5 = *(undefined8 *)(*plVar9 + 0x260);
    }
    else {
      uVar6 = System_Reflection_FieldInfo__get_IsPublic(plVar9,0);
      if ((uVar6 & 1) == 0) {
        lVar7 = *param_2;
        plVar4 = (long *)(**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
        if ((plVar4 == (long *)0x0) ||
           (uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0)),
           lVar7 == 0)) goto LAB_073a2dac;
        FUN_06c35e38(lVar7,uVar5,DAT_0919ad00);
      }
      pcVar8 = *(code **)(*plVar9 + 0x268);
      uVar5 = *(undefined8 *)(*plVar9 + 0x270);
    }
    uVar5 = (*pcVar8)(plVar9,uVar5);
    if (*(int *)(DAT_0918ad80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918ad80);
    }
    MessagePack_SkipClrVisibilityChecks__<GetSkipVisibilityChecksRequirements>g__AddTypeIfNonPublic_9_1
              (uVar5,param_2);
  }
LAB_073a2d78:
  uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar10 = uVar10 + 1;
  if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar10) {
    return;
  }
  goto LAB_073a2a88;
}

