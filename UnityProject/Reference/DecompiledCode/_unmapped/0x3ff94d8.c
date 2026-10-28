// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::swap
// address: 0x3ff94d8
// body: available
// range: 0x3ff94d8-0x3ff97ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char>
   >::swap(std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::swap
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,basic_filebuf *param_1)

{
  basic_filebuf *pbVar1;
  basic_filebuf<char,std::__ndk1::char_traits<char>> *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  basic_filebuf<char,std::__ndk1::char_traits<char>> bVar7;
  basic_filebuf<char,std::__ndk1::char_traits<char>> bVar8;
  undefined8 uVar9;
  basic_filebuf<char,std::__ndk1::char_traits<char>> *pbVar10;
  basic_filebuf *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  locale alStack_28 [8];
  
  locale::locale(alStack_28,(locale *)(this + 8));
  locale::operator=((locale *)(this + 8),(locale *)(param_1 + 8));
  locale::operator=((locale *)(param_1 + 8),alStack_28);
  locale::~locale(alStack_28);
  uVar9 = *(undefined8 *)(this + 0x10);
  pbVar1 = param_1 + 0x58;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  pbVar2 = this + 0x58;
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  pbVar11 = *(basic_filebuf **)(param_1 + 0x40);
  pbVar10 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40);
  if ((pbVar10 != pbVar2) && (pbVar11 != pbVar1)) {
    *(basic_filebuf **)(this + 0x40) = pbVar11;
    *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(param_1 + 0x40) = pbVar10;
    uVar9 = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    uVar9 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar9;
    goto LAB_03ff9674;
  }
  lVar13 = *(long *)(this + 0x48) - (long)pbVar10;
  lVar14 = *(long *)(this + 0x50) - (long)pbVar10;
  lVar15 = *(long *)(param_1 + 0x48) - (long)pbVar11;
  lVar16 = *(long *)(param_1 + 0x50) - (long)pbVar11;
  lVar17 = -(ulong)(*(long *)(this + 0x48) == 0);
  lVar18 = -(ulong)(*(long *)(this + 0x50) == 0);
  lVar19 = -(ulong)(*(long *)(param_1 + 0x48) == 0);
  lVar20 = -(ulong)(*(long *)(param_1 + 0x50) == 0);
  if (pbVar10 == pbVar2) {
    if (pbVar11 == pbVar1) goto LAB_03ff9634;
    *(basic_filebuf **)(this + 0x40) = pbVar11;
    *(basic_filebuf **)(param_1 + 0x40) = pbVar1;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)pbVar10;
  }
  else if (pbVar11 == pbVar1) {
    *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(param_1 + 0x40) = pbVar10;
    *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40) = pbVar2;
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  }
  else {
LAB_03ff9634:
    uVar9 = *(undefined8 *)pbVar2;
    *(undefined8 *)pbVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar9;
  }
  lVar12 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x48) =
       *(long *)(this + 0x40) +
       CONCAT17((byte)((ulong)lVar15 >> 0x38) & ~(byte)((ulong)lVar19 >> 0x38),
                CONCAT16((byte)((ulong)lVar15 >> 0x30) & ~(byte)((ulong)lVar19 >> 0x30),
                         CONCAT15((byte)((ulong)lVar15 >> 0x28) & ~(byte)((ulong)lVar19 >> 0x28),
                                  CONCAT14((byte)((ulong)lVar15 >> 0x20) &
                                           ~(byte)((ulong)lVar19 >> 0x20),
                                           CONCAT13((byte)((ulong)lVar15 >> 0x18) &
                                                    ~(byte)((ulong)lVar19 >> 0x18),
                                                    CONCAT12((byte)((ulong)lVar15 >> 0x10) &
                                                             ~(byte)((ulong)lVar19 >> 0x10),
                                                             CONCAT11((byte)((ulong)lVar15 >> 8) &
                                                                      ~(byte)((ulong)lVar19 >> 8),
                                                                      (byte)lVar15 & ~(byte)lVar19))
                                                   )))));
  *(long *)(this + 0x50) =
       *(long *)(this + 0x40) +
       CONCAT17((byte)((ulong)lVar16 >> 0x38) & ~(byte)((ulong)lVar20 >> 0x38),
                CONCAT16((byte)((ulong)lVar16 >> 0x30) & ~(byte)((ulong)lVar20 >> 0x30),
                         CONCAT15((byte)((ulong)lVar16 >> 0x28) & ~(byte)((ulong)lVar20 >> 0x28),
                                  CONCAT14((byte)((ulong)lVar16 >> 0x20) &
                                           ~(byte)((ulong)lVar20 >> 0x20),
                                           CONCAT13((byte)((ulong)lVar16 >> 0x18) &
                                                    ~(byte)((ulong)lVar20 >> 0x18),
                                                    CONCAT12((byte)((ulong)lVar16 >> 0x10) &
                                                             ~(byte)((ulong)lVar20 >> 0x10),
                                                             CONCAT11((byte)((ulong)lVar16 >> 8) &
                                                                      ~(byte)((ulong)lVar20 >> 8),
                                                                      (byte)lVar16 & ~(byte)lVar20))
                                                   )))));
  *(long *)(param_1 + 0x48) =
       lVar12 + CONCAT17((byte)((ulong)lVar13 >> 0x38) & ~(byte)((ulong)lVar17 >> 0x38),
                         CONCAT16((byte)((ulong)lVar13 >> 0x30) & ~(byte)((ulong)lVar17 >> 0x30),
                                  CONCAT15((byte)((ulong)lVar13 >> 0x28) &
                                           ~(byte)((ulong)lVar17 >> 0x28),
                                           CONCAT14((byte)((ulong)lVar13 >> 0x20) &
                                                    ~(byte)((ulong)lVar17 >> 0x20),
                                                    CONCAT13((byte)((ulong)lVar13 >> 0x18) &
                                                             ~(byte)((ulong)lVar17 >> 0x18),
                                                             CONCAT12((byte)((ulong)lVar13 >> 0x10)
                                                                      & ~(byte)((ulong)lVar17 >>
                                                                               0x10),
                                                                      CONCAT11((byte)((ulong)lVar13
                                                                                     >> 8) &
                                                                               ~(byte)((ulong)lVar17
                                                                                      >> 8),
                                                                               (byte)lVar13 &
                                                                               ~(byte)lVar17)))))));
  *(long *)(param_1 + 0x50) =
       lVar12 + CONCAT17((byte)((ulong)lVar14 >> 0x38) & ~(byte)((ulong)lVar18 >> 0x38),
                         CONCAT16((byte)((ulong)lVar14 >> 0x30) & ~(byte)((ulong)lVar18 >> 0x30),
                                  CONCAT15((byte)((ulong)lVar14 >> 0x28) &
                                           ~(byte)((ulong)lVar18 >> 0x28),
                                           CONCAT14((byte)((ulong)lVar14 >> 0x20) &
                                                    ~(byte)((ulong)lVar18 >> 0x20),
                                                    CONCAT13((byte)((ulong)lVar14 >> 0x18) &
                                                             ~(byte)((ulong)lVar18 >> 0x18),
                                                             CONCAT12((byte)((ulong)lVar14 >> 0x10)
                                                                      & ~(byte)((ulong)lVar18 >>
                                                                               0x10),
                                                                      CONCAT11((byte)((ulong)lVar14
                                                                                     >> 8) &
                                                                               ~(byte)((ulong)lVar18
                                                                                      >> 8),
                                                                               (byte)lVar14 &
                                                                               ~(byte)lVar18)))))));
LAB_03ff9674:
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = *(undefined8 *)(this + 0x60);
  uVar4 = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  uVar9 = *(undefined8 *)(this + 0x70);
  uVar4 = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar9 = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x88);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  uVar9 = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  bVar7 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xa0);
  uVar5 = *(undefined4 *)(this + 0x98);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  bVar8 = this[0xa0];
  this[0xa0] = bVar7;
  *(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xa0) = bVar8;
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  bVar7 = this[0xa1];
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  uVar6 = *(undefined4 *)(this + 0x9c);
  this[0xa1] = *(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xa1);
  pbVar1 = param_1 + 0x58;
  *(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xa1) = bVar7;
  pbVar11 = *(basic_filebuf **)(this + 0x10);
  *(undefined4 *)(this + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  bVar7 = this[0xa2];
  this[0xa2] = *(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xa2);
  *(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xa2) = bVar7;
  if (pbVar11 == pbVar1) {
    *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x10) = pbVar2;
    *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x18) =
         pbVar2 + (*(long *)(this + 0x18) - (long)pbVar1);
    *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x20) =
         pbVar2 + (*(long *)(this + 0x20) - (long)pbVar1);
    pbVar10 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(param_1 + 0x10);
  }
  else {
    if (*(basic_filebuf **)(this + 0x28) == pbVar1) {
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x38) =
           pbVar2 + (*(long *)(this + 0x38) - (long)pbVar1);
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x28) = pbVar2;
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x30) =
           pbVar2 + (*(long *)(this + 0x30) - (long)pbVar1);
    }
    pbVar10 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(param_1 + 0x10);
  }
  if (pbVar10 != pbVar2) {
    if (*(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(param_1 + 0x28) == pbVar2) {
      *(basic_filebuf **)(param_1 + 0x28) = pbVar1;
      *(basic_filebuf **)(param_1 + 0x30) = pbVar1 + (*(long *)(param_1 + 0x30) - (long)pbVar2);
      *(basic_filebuf **)(param_1 + 0x38) = pbVar1 + (*(long *)(param_1 + 0x38) - (long)pbVar2);
      return;
    }
    return;
  }
  *(basic_filebuf **)(param_1 + 0x10) = pbVar1;
  *(basic_filebuf **)(param_1 + 0x18) = pbVar1 + (*(long *)(param_1 + 0x18) - (long)pbVar2);
  *(basic_filebuf **)(param_1 + 0x20) = pbVar1 + (*(long *)(param_1 + 0x20) - (long)pbVar2);
  return;
}

