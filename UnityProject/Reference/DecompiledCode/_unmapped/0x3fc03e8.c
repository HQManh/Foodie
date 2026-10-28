// rea decompile_all
// name: FUN_03fc03e8
// address: 0x3fc03e8
// body: available
// range: 0x3fc03e8-0x3fc06fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc03e8(long param_1,undefined8 param_2)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  undefined1 auStack_68 [8];
  long local_60;
  
  puVar1 = (ushort *)(param_1 + 0x135);
  if ((*puVar1 >> 0xd & 1) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      if (*(char *)(param_1 + 0x132) == '\0') {
        if ((*(short *)(param_1 + 0x12e) != 0) && (*(long *)(param_1 + 0xb0) == 0)) {
          uVar3 = FUN_03fa7f34(*(short *)(param_1 + 0x12e),0x10);
          *(undefined8 *)(param_1 + 0xb0) = uVar3;
          if (*(short *)(param_1 + 0x12e) != 0) {
            lVar2 = 0;
            uVar9 = 0;
            do {
              auVar12 = FUN_03fabb00(param_1,uVar9 & 0xffffffff);
              *(int *)(*(long *)(param_1 + 0xb0) + lVar2 + 8) = auVar12._8_4_;
              uVar3 = FUN_03fbe574(auVar12._0_8_,1);
              uVar9 = uVar9 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar2) = uVar3;
              lVar2 = lVar2 + 0x10;
            } while (uVar9 < *(ushort *)(param_1 + 0x12e));
          }
        }
        if (*(short *)(param_1 + 0x12a) != 0) {
          uVar9 = 0;
          plVar8 = (long *)(param_1 + 0x140);
          do {
            lVar2 = FUN_03fabf0c(param_1,uVar9 & 0xffffffff);
            *plVar8 = lVar2;
            if (lVar2 == 0) {
              lVar2 = FUN_03fade98();
              *plVar8 = lVar2;
LAB_03fc06b4:
              plVar6 = (long *)FUN_03fade98();
              lVar2 = *plVar6;
            }
            else {
              lVar2 = *(long *)(lVar2 + 8);
              if (lVar2 == 0) goto LAB_03fc06b4;
            }
            plVar8[-1] = lVar2;
            uVar9 = uVar9 + 1;
            plVar8 = plVar8 + 2;
          } while (uVar9 < *(ushort *)(param_1 + 0x12a));
        }
      }
      else {
        FUN_03fbffcc(*(undefined8 *)(param_1 + 0x40),param_2);
        FUN_03f795d4(param_1,param_2);
      }
    }
    else {
      lVar2 = FUN_03fb4784();
      lVar11 = *(long *)(param_1 + 0x60);
      if ((*(short *)(lVar2 + 0x12e) != 0) && (*(long *)(param_1 + 0xb0) == 0)) {
        *(short *)(param_1 + 0x12e) = *(short *)(lVar2 + 0x12e);
        uVar3 = FUN_03fa7f34(*(undefined2 *)(lVar2 + 0x12e),0x10);
        *(undefined8 *)(param_1 + 0xb0) = uVar3;
        if (*(short *)(lVar2 + 0x12e) != 0) {
          lVar10 = 0;
          uVar9 = 0;
          do {
            auVar12 = FUN_03fabb00(lVar2,uVar9 & 0xffffffff);
            *(int *)(*(long *)(param_1 + 0xb0) + lVar10 + 8) = auVar12._8_4_;
            uVar3 = FUN_03f76ed4(auVar12._0_8_,lVar11 + 8,0);
            uVar3 = FUN_03fbe574(uVar3,1);
            uVar9 = uVar9 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar10) = uVar3;
            lVar10 = lVar10 + 0x10;
          } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
        }
      }
      if ((*(short *)(lVar2 + 0x12a) != 0) &&
         (*(short *)(param_1 + 0x12a) = *(short *)(lVar2 + 0x12a), *(short *)(lVar2 + 0x12a) != 0))
      {
        uVar9 = 0;
        plVar8 = (long *)(param_1 + 0x140);
        do {
          lVar10 = FUN_03fabf0c(lVar2,uVar9 & 0xffffffff);
          if (lVar10 == 0) {
LAB_03fc0580:
            lVar10 = param_1 + uVar9 * 0x10;
            *plVar8 = 0;
            plVar6 = (long *)(lVar10 + 0x138);
            plVar5 = (long *)(lVar10 + 0x140);
LAB_03fc0590:
            lVar10 = FUN_03fade98();
            *plVar5 = lVar10;
LAB_03fc0598:
            plVar5 = (long *)FUN_03fade98();
            lVar7 = *plVar5;
          }
          else {
            lVar7 = *(long *)(lVar10 + 0x20);
            if (lVar7 == 0) {
LAB_03fc0518:
              plVar6 = plVar8 + -1;
              *plVar8 = lVar10;
            }
            else {
              if ((*(byte *)(lVar10 + 0x53) >> 1 & 1) != 0) {
                FUN_03f773d0(auStack_68,*(undefined8 *)(lVar10 + 0x40),lVar11 + 8);
                lVar10 = FUN_03f7b068(auStack_68);
                if (lVar10 == 0) goto LAB_03fc0580;
                lVar7 = *(long *)(lVar10 + 0x20);
                if (lVar7 == 0) goto LAB_03fc0518;
              }
              if ((*(ushort *)(lVar7 + 0x135) >> 4 & 1) == 0) goto LAB_03fc0518;
              lVar10 = FUN_03f7b048(lVar10,*(undefined8 *)(lVar11 + 8),0);
              plVar6 = plVar8 + -1;
              *plVar8 = lVar10;
              plVar5 = plVar8;
              if (lVar10 == 0) goto LAB_03fc0590;
              plVar6 = (long *)(param_1 + uVar9 * 0x10 + 0x138);
            }
            if (((*(long *)(lVar10 + 0x20) != 0) && (*(long *)(lVar10 + 0x20) != param_1)) &&
               (uVar4 = FUN_03fadb08(lVar10), (uVar4 & 1) != 0)) {
              FUN_03fbffcc(*(undefined8 *)(lVar10 + 0x20),param_2);
            }
            lVar7 = *(long *)(lVar10 + 8);
            if (*(long *)(lVar10 + 8) == 0) {
              if (((*(byte *)(lVar10 + 0x53) & 3) != 2) ||
                 (*(long *)(*(long *)(lVar10 + 0x40) + 0x10) != 0)) goto LAB_03fc0598;
              FUN_03fc07b4(auStack_68,lVar10);
              lVar7 = local_60;
            }
          }
          *plVar6 = lVar7;
          uVar9 = uVar9 + 1;
          plVar8 = plVar8 + 2;
        } while (uVar9 < *(ushort *)(lVar2 + 0x12a));
      }
    }
    *puVar1 = *puVar1 | 0x2000;
  }
  return;
}

