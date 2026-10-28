// rea decompile_all
// name: System.SpanHelpers$$SequenceCompareTo
// address: 0x75ca184
// body: available
// range: 0x75ca184-0x75ca623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_SpanHelpers__SequenceCompareTo(long param_1,int param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  if ((DAT_09521dc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf070);
    FUN_03f5c2a4(&DAT_091bf080);
    FUN_03f5c2a4(&DAT_0917f888);
    DAT_09521dc9 = 1;
  }
  if (param_1 != param_3) {
    iVar8 = param_2;
    if (param_4 <= param_2) {
      iVar8 = param_4;
    }
    uVar9 = System_IntPtr__op_Explicit(iVar8,0);
    lVar10 = System_IntPtr__op_Explicit(0,0);
    uVar11 = System_IntPtr__op_Explicit(uVar9,0);
    if (3 < uVar11) {
      uVar11 = System_Numerics_Vector__get_IsHardwareAccelerated(0);
      if ((uVar11 & 1) != 0) {
        uVar11 = System_IntPtr__op_Explicit(uVar9,0);
        if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0917f888);
        }
        lVar13 = DAT_091bf070;
        lVar12 = *(long *)(DAT_091bf070 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        if ((ulong)(long)**(int **)(lVar13 + 0xb8) <= uVar11) {
          if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = DAT_091bf070;
          lVar12 = *(long *)(DAT_091bf070 + 0x20);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c();
          }
          uVar14 = System_IntPtr__op_Subtraction(uVar9,**(undefined4 **)(lVar13 + 0xb8),0);
          do {
            puVar1 = (undefined8 *)(param_1 + lVar10 * 2);
            puVar2 = (undefined8 *)(param_3 + lVar10 * 2);
            uVar3 = *puVar1;
            uVar5 = puVar1[1];
            uVar4 = *puVar2;
            uVar6 = puVar2[1];
            if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar11 = FUN_075dd794(uVar3,uVar5,uVar4,uVar6,DAT_091bf080);
            if ((uVar11 & 1) != 0) break;
            if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar13 = DAT_091bf070;
            lVar12 = *(long *)(DAT_091bf070 + 0x20);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_03f95a6c();
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_03f95a6c();
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar13 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_03f95a6c();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
            if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_03f95a6c();
            }
            lVar10 = System_IntPtr__op_Addition(lVar10,**(undefined4 **)(lVar13 + 0xb8),0);
            uVar11 = System_IntPtr__op_Explicit(uVar14,0);
            uVar15 = System_IntPtr__op_Explicit(lVar10,0);
          } while (uVar15 <= uVar11);
        }
      }
      uVar11 = System_IntPtr__op_Explicit(uVar9,0);
      uVar14 = System_IntPtr__op_Addition(lVar10,4,0);
      uVar15 = System_IntPtr__op_Explicit(uVar14,0);
      if (uVar15 <= uVar11) {
        do {
          uVar11 = System_UIntPtr__op_Inequality
                             (*(undefined8 *)(param_1 + lVar10 * 2),
                              *(undefined8 *)(param_3 + lVar10 * 2),0);
          if ((uVar11 & 1) != 0) break;
          lVar10 = System_IntPtr__op_Addition(lVar10,4,0);
          uVar11 = System_IntPtr__op_Explicit(uVar9,0);
          uVar14 = System_IntPtr__op_Addition(lVar10,4,0);
          uVar15 = System_IntPtr__op_Explicit(uVar14,0);
        } while (uVar15 <= uVar11);
      }
    }
    uVar11 = System_IntPtr__op_Explicit(uVar9,0);
    uVar14 = System_IntPtr__op_Addition(lVar10,2,0);
    uVar15 = System_IntPtr__op_Explicit(uVar14,0);
    if ((uVar15 <= uVar11) && (*(int *)(param_1 + lVar10 * 2) == *(int *)(param_3 + lVar10 * 2))) {
      lVar10 = System_IntPtr__op_Addition(lVar10,2,0);
    }
    uVar11 = System_IntPtr__op_Explicit(lVar10,0);
    uVar15 = System_IntPtr__op_Explicit(uVar9,0);
    if (uVar11 < uVar15) {
      do {
        uVar7 = *(undefined2 *)(param_3 + lVar10 * 2);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar8 = System_Char__CompareTo(param_1 + lVar10 * 2,uVar7,0);
        if (iVar8 != 0) {
          return iVar8;
        }
        lVar10 = System_IntPtr__op_Addition(lVar10,1,0);
        uVar11 = System_IntPtr__op_Explicit(lVar10,0);
        uVar15 = System_IntPtr__op_Explicit(uVar9,0);
      } while (uVar11 < uVar15);
    }
  }
  return param_2 - param_4;
}

