// rea decompile_all
// name: System.Reflection.CustomAttributeData$$GetHashCode
// address: 0x74ec110
// body: available
// range: 0x74ec110-0x74ec407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ec3e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Reflection_CustomAttributeData__GetHashCode(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  if ((DAT_095215e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_0917a028);
    FUN_03f5c2a4(&DAT_0917a030);
    FUN_03f5c2a4(&DAT_0917b040);
    FUN_03f5c2a4(&DAT_0917b048);
    DAT_095215e8 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424();
    if (lVar9 == 0) goto LAB_074ec1c8;
LAB_074ec1a4:
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_074ec3e8;
    iVar2 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
    uVar8 = iVar2 << 0x10;
  }
  else {
    if (lVar9 != 0) goto LAB_074ec1a4;
LAB_074ec1c8:
    uVar8 = 0xd;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
LAB_074ec2dc:
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 == (long *)0x0) {
      return uVar8;
    }
    iVar2 = 0;
    do {
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a028) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_074ec344;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a028,0);
LAB_074ec344:
      iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (iVar3 <= iVar2) {
        return uVar8;
      }
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) break;
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b040) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_074ec3ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b040,0);
LAB_074ec3ac:
      (*(code *)*puVar5)(&local_b0,plVar4,iVar2,puVar5[1]);
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uStack_68 = uStack_98;
      local_70 = uStack_a0;
      uStack_58 = uStack_88;
      local_60 = local_90;
      iVar3 = System_Reflection_CustomAttributeNamedArgument__GetHashCode(&local_80);
      plVar4 = *(long **)(param_1 + 0x20);
      uVar8 = uVar8 + iVar3 * 0x20;
      iVar2 = iVar2 + 1;
    } while (plVar4 != (long *)0x0);
  }
  else {
    uVar10 = 0;
    do {
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a030) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_074ec234;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a030,0);
LAB_074ec234:
      iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (iVar2 <= (int)uVar10) goto LAB_074ec2dc;
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) break;
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b048) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_074ec29c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b048,0);
LAB_074ec29c:
      auVar11 = (*(code *)*puVar5)(plVar4,uVar10,puVar5[1]);
      local_50 = auVar11;
      iVar2 = System_Reflection_CustomAttributeTypedArgument__GetHashCode(local_50);
      uVar1 = uVar10 & 7;
      plVar4 = *(long **)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
      uVar8 = (iVar2 + 7 << (ulong)(uVar1 << 2) ^ uVar8) + uVar8;
    } while (plVar4 != (long *)0x0);
  }
LAB_074ec3e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

