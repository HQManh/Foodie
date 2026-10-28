// rea decompile_all
// name: MessagePack.SipHash$$Compute
// address: 0x73a4fe0
// body: available
// range: 0x73a4fe0-0x73a57db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a50c8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a53e8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a55c0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a57d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong MessagePack_SipHash__Compute(long param_1,long param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint *puVar7;
  ushort *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if ((DAT_09520b82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3040);
    FUN_03f5c2a4(&DAT_091d3048);
    FUN_03f5c2a4(&DAT_091d3050);
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520b82 = 1;
  }
  uVar3 = (uint)param_3;
  uVar15 = *(ulong *)(param_1 + 0x10);
  uVar13 = *(ulong *)(param_1 + 0x18);
  uVar10 = (long)(int)uVar3 & 0xfffffffffffffff8;
  uVar9 = (uint)uVar10;
  uVar16 = uVar13 ^ 0x100a160317100a1e;
  uVar14 = uVar15 ^ 0x1f160a001e161714;
  if (0 < (int)uVar9) {
    uVar19 = 0;
    uVar18 = param_3;
    do {
      if ((param_3 & 0xffffffff) < uVar19) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c06 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c06 = '\x01';
      }
      if ((int)uVar18 < 8) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar4 = (ulong *)FUN_04c072ac(param_2 + uVar19,uVar18 & 0xffffffff,DAT_091d3020);
      uVar15 = uVar15 + uVar13;
      uVar19 = uVar19 + 8;
      uVar12 = uVar15 ^ (uVar13 >> 0x33 | uVar13 << 0xd);
      uVar16 = *puVar4 ^ uVar16;
      uVar18 = (ulong)((int)uVar18 - 8);
      uVar11 = uVar16 + uVar14 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
      uVar13 = uVar16 + uVar14 + uVar12;
      uVar16 = uVar13 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
      uVar15 = uVar11 + (uVar15 >> 0x20 | uVar15 << 0x20);
      uVar14 = uVar15 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
      uVar15 = uVar16 + uVar15;
      uVar12 = uVar15 ^ (uVar16 >> 0x33 | uVar16 << 0xd);
      uVar16 = uVar14 + (uVar13 >> 0x20 | uVar13 << 0x20);
      uVar11 = uVar16 ^ (uVar14 >> 0x30 | uVar14 << 0x10);
      uVar16 = uVar12 + uVar16;
      uVar13 = uVar16 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
      uVar14 = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar15 = uVar11 + (uVar15 >> 0x20 | uVar15 << 0x20);
      uVar16 = uVar15 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
      uVar15 = uVar15 ^ *puVar4;
    } while (uVar19 < (param_3 & 0xfffffff8));
  }
  uVar17 = uVar3 & 7;
  uVar19 = param_3 << 0x38;
  if (uVar17 < 4) {
    if (uVar17 == 1) {
      if (uVar9 == uVar3) {
LAB_073a57d8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar10 = (ulong)*(byte *)(param_2 + uVar10);
    }
    else {
      if (uVar17 != 2) {
        if (uVar17 != 3) goto LAB_073a56c0;
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        if (DAT_09520c08 == '\0') {
          FUN_03f5c2a4(&DAT_091d3020);
          FUN_03f5c2a4(&DAT_091b9798);
          DAT_09520c08 = '\x01';
        }
        if ((param_3 & 6) == 0) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
        }
        puVar6 = (undefined2 *)FUN_04c072ac(param_2 + (int)uVar9,param_3 & 7,DAT_091d3020);
        if (uVar3 <= (uint)((long)(int)uVar9 | 2U)) goto LAB_073a57d8;
        uVar10 = (ulong)CONCAT12(*(undefined1 *)(param_2 + ((long)(int)uVar9 | 2U)),*puVar6);
        goto LAB_073a5634;
      }
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c08 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c08 = '\x01';
      }
      if ((param_3 & 6) == 0) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar8 = (ushort *)FUN_04c072ac(param_2 + (int)uVar9,param_3 & 7,DAT_091d3020);
      uVar10 = (ulong)*puVar8;
    }
LAB_073a56bc:
    uVar19 = uVar19 | uVar10;
  }
  else {
    if (uVar17 < 6) {
      if (uVar17 == 4) {
        if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        if (DAT_09520c07 == '\0') {
          FUN_03f5c2a4(&DAT_091d3020);
          FUN_03f5c2a4(&DAT_091b9798);
          DAT_09520c07 = '\x01';
        }
        if ((uVar3 >> 2 & 1) == 0) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
        }
        puVar7 = (uint *)FUN_04c072ac(param_2 + (int)uVar9,param_3 & 7,DAT_091d3020);
        uVar10 = (ulong)*puVar7;
        goto LAB_073a56bc;
      }
      if (uVar17 != 5) goto LAB_073a56c0;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c07 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c07 = '\x01';
      }
      if ((uVar3 >> 2 & 1) == 0) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar5 = (undefined4 *)FUN_04c072ac(param_2 + (int)uVar9,param_3 & 7,DAT_091d3020);
      if (uVar3 <= (uint)((long)(int)uVar9 | 4U)) goto LAB_073a57d8;
      uVar10 = (ulong)CONCAT14(*(undefined1 *)(param_2 + ((long)(int)uVar9 | 4U)),*puVar5);
    }
    else if (uVar17 == 6) {
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c07 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c07 = '\x01';
      }
      if ((uVar3 >> 2 & 1) == 0) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar5 = (undefined4 *)FUN_04c072ac(param_2 + (int)uVar9,param_3 & 7,DAT_091d3020);
      uVar1 = *puVar5;
      uVar17 = (uint)((long)(int)uVar9 | 4U);
      iVar2 = uVar3 - uVar17;
      if (uVar3 < uVar17) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c08 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c08 = '\x01';
      }
      if (iVar2 < 2) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar6 = (undefined2 *)FUN_04c072ac(param_2 + ((long)(int)uVar9 | 4U),iVar2,DAT_091d3020);
      uVar10 = (ulong)CONCAT24(*puVar6,uVar1);
    }
    else {
      if (uVar17 != 7) goto LAB_073a56c0;
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c07 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c07 = '\x01';
      }
      if ((uVar3 >> 2 & 1) == 0) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar5 = (undefined4 *)FUN_04c072ac(param_2 + (int)uVar9,param_3 & 7,DAT_091d3020);
      uVar1 = *puVar5;
      uVar17 = (uint)(uVar10 | 4);
      iVar2 = uVar3 - uVar17;
      if (uVar3 < uVar17) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if (DAT_09520c08 == '\0') {
        FUN_03f5c2a4(&DAT_091d3020);
        FUN_03f5c2a4(&DAT_091b9798);
        DAT_09520c08 = '\x01';
      }
      if (iVar2 < 2) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
      }
      puVar6 = (undefined2 *)FUN_04c072ac(param_2 + (uVar10 | 4),iVar2,DAT_091d3020);
      if (uVar3 <= (uint)((long)(int)uVar9 | 6U)) goto LAB_073a57d8;
      uVar10 = (ulong)CONCAT16(*(undefined1 *)(param_2 + ((long)(int)uVar9 | 6U)),
                               CONCAT24(*puVar6,uVar1));
    }
LAB_073a5634:
    uVar19 = uVar10 | uVar19;
  }
LAB_073a56c0:
  uVar16 = uVar19 ^ uVar16;
  uVar15 = uVar15 + uVar13;
  uVar18 = uVar15 ^ (uVar13 >> 0x33 | uVar13 << 0xd);
  uVar10 = uVar16 + uVar14 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar13 = uVar16 + uVar14 + uVar18;
  uVar15 = uVar10 + (uVar15 >> 0x20 | uVar15 << 0x20);
  uVar14 = uVar13 ^ (uVar18 >> 0x2f | uVar18 << 0x11);
  uVar16 = uVar15 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
  uVar15 = uVar14 + uVar15;
  uVar13 = uVar16 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar10 = uVar15 ^ (uVar14 >> 0x33 | uVar14 << 0xd);
  uVar16 = uVar13 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar13 = uVar10 + uVar13;
  uVar15 = uVar16 + (uVar15 >> 0x20 | uVar15 << 0x20);
  uVar10 = uVar13 ^ (uVar10 >> 0x2f | uVar10 << 0x11);
  uVar16 = uVar15 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
  uVar15 = (uVar15 ^ uVar19) + uVar10;
  uVar10 = uVar15 ^ (uVar10 >> 0x33 | uVar10 << 0xd);
  uVar13 = uVar16 + ((uVar13 >> 0x20 | uVar13 << 0x20) ^ 0xff);
  uVar16 = uVar13 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar13 = uVar10 + uVar13;
  uVar10 = uVar13 ^ (uVar10 >> 0x2f | uVar10 << 0x11);
  uVar15 = uVar16 + (uVar15 >> 0x20 | uVar15 << 0x20);
  uVar16 = uVar15 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
  uVar15 = uVar10 + uVar15;
  uVar10 = uVar15 ^ (uVar10 >> 0x33 | uVar10 << 0xd);
  uVar13 = uVar16 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar16 = uVar13 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar13 = uVar10 + uVar13;
  uVar10 = uVar13 ^ (uVar10 >> 0x2f | uVar10 << 0x11);
  uVar15 = uVar16 + (uVar15 >> 0x20 | uVar15 << 0x20);
  uVar16 = uVar15 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
  uVar15 = uVar10 + uVar15;
  uVar10 = uVar15 ^ (uVar10 >> 0x33 | uVar10 << 0xd);
  uVar13 = uVar16 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar16 = uVar13 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar13 = uVar10 + uVar13;
  uVar10 = uVar13 ^ (uVar10 >> 0x2f | uVar10 << 0x11);
  uVar15 = uVar16 + (uVar15 >> 0x20 | uVar15 << 0x20);
  uVar16 = uVar15 ^ (uVar16 >> 0x2b | uVar16 << 0x15);
  uVar10 = uVar10 + uVar15 ^ (uVar10 >> 0x33 | uVar10 << 0xd);
  uVar15 = uVar16 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar13 = uVar15 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
  uVar15 = uVar10 + uVar15;
  return (uVar10 >> 0x2f | uVar10 << 0x11) ^ (uVar13 >> 0x2b | uVar13 << 0x15) ^
         (uVar15 >> 0x20 | uVar15 << 0x20) ^ uVar15;
}

